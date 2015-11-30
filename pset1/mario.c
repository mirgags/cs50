#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int x = 0;
    int y = 0;
    int blocks = 0;
    //Loop until you get an int between 1 and 23
    do {
        printf("height: ");
        n = GetInt();
    }
    while (n < 1 || n > 23);
    //Start a loop with a counter for each pyramid row
    do {
        blocks = x + 2;
        //Start a loop with a condition to print each character
        do {
            if (y <= n - blocks) {
                printf(" ");
            }
            else {
                printf("#");
            }
            //increment the character position
            y = y + 1;
        }
        while (y < n + 1);
        //end the row
        printf("\n");
        //reset the character position (carriage return)
        y = 0;
        //increment the row
        x = x + 1;
    }
    while (x < n);
}

