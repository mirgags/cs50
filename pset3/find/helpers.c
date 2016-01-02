/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

int recurSearch(int $value, int $values[], int $n)
{
    if($n < 2) {
        if($value == $values[0]) {
            return true;
        }
        else 
        {
            return false;
        };
    }
    else {
        int median = $n / 2;
        int endIndex, startIndex;
        if($value == $values[median]) {
            return true;
        };
        if($value < $values[median]) {
            startIndex = 0;
            endIndex = median - 1;
        }
        else {
            startIndex = median + 1;
            endIndex = $n;
        };
        int arraySize = endIndex - startIndex + 1;
        int newValues[arraySize];
        for(int i = 0; i < arraySize; i++) {
            newValues[i] = $values[i + startIndex];
        };
        //printf("Median is: %d\n", arraySize / 2);
        //printf("Value is: %d\n", $value);
        //printf("Array is:\n[");
        //for(int k = 0; k < arraySize; k++) {
        //    if(k < arraySize -1) {
        //        printf("%d,", newValues[k]);
        //    }
        //    else {
        //        printf("%d]\n*****\n", newValues[k]);
        //    };
        //};
        return recurSearch($value, newValues, arraySize);
    };
};
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //printf("Search Value is: %d\n", value);
    if(n < 2) {
        if(value == values[0]) 
        {
            return true;
        }
        else
        {
            return false;
        };
    };
    return recurSearch(value, values, n);
};

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int a = 0;
    int b = 0;
    // Implmented bubble sort
    //printf("Array is:\n[");
    //for(int k=0;k<n;k++) {
    //    if(k < n -1) {
    //        printf("%d,", values[k]);
    //    }
    //    else {
    //        printf("%d]\n", values[k]);
    //    };
    //};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 ; j++) {
            a = values[j];
            b = values[j + 1];
            //printf("%d position = %d\n", j, a);
            //printf("%d position = %d\n", j + 1, b);
            //printf("*****\n");
            if(a > b) {
                //printf("Swapping values\n*****");
                values[j] = b;
                values[j + 1] = a;
            };
        };
        //printf("Array is:\n[");
        //for(int k=0;k<n;k++) {
        //    if(k < n -1) {
        //        printf("%d,", values[k]);
        //    }
        //    else {
        //        printf("%d]\n", values[k]);
        //    };
        //};
    };
    return;
};
