#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me a number: ");
    int x = GetInt();

    if (x > 0) {
        printf("you picked a positive number\n");
    }
    else if (x < 0) {
        printf("You picked a negative number\n");
    }
    else {
        printf("You picked zero.\n");
    }
}
