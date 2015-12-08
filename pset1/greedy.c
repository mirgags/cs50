#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float n = 0.0;
    int total = 0;
    int qtrs = 0;
    int dimes = 0;
    int nicks = 0;
    int penns = 0;
    // Get user input and validate it is a positive float
    do {
        printf("How much change is owed: ");
        n = GetFloat();
    }
    while(n < 0);
    // Convert float to integer to avoid inaccuracies
    total = roundf(n*100);
    
    // Loop through coin denominations, subtracting from total when there is a common denominator
    do {
        if(total / 25 >= 1) {
            qtrs = total / 25;
            total = total % (qtrs * 25);
        }
        else {
            if(total / 10 >= 1) {
                dimes = total / 10;
                total = total % (dimes * 10);
            }
            else {
                if(total / 5 >= 1) {
                    nicks = total / 5;
                    total = total % (nicks * 5);
                }
                else {
                    penns = total;
                    total = 0;
                };
            };
        };
    }
    while(total > 0);
    // Print output per pset spec
    printf("%i\n", (qtrs + dimes + nicks + penns));
};
