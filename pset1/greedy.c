#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float n;
    int total, qtrs, dimes, nicks, penns;
    do {
        printf("How much change is owed: ");
        n = GetFloat();
    }
    while(n < 0);
    total = round((n*100));
    
    do {
        printf("Total cents is: %i\n", total);
        if(total / 25 >= 1) {
            qtrs = total / 25;
            total = total - (qtrs * 25);
        }
        else {
            if(total / 10 >= 1) {
                dimes = total / 10;
                total = total - (dimes * 10);
            }
            else {
                if(total / 5 >= 1) {
                    nicks = total / 5;
                    total = total - (nicks * 5);
                }
                else {
                    penns = total;
                    total = 0;
                };
            };
        };
    }
    while(total > 0);
    if(qtrs < 0) {
        qtrs = 0;
    };
    if(dimes < 0) {
        dimes = 0;
    };
    if(nicks < 0) {
        nicks = 0;
    };
    if(penns < 0) {
        penns = 0;
    };
    printf("The change is:\n%i quarters\n%i dimes\n%i nickels\n%i pennies\n", qtrs, dimes, nicks, penns);
};
