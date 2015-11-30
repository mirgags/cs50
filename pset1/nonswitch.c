#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me a number: ");
    int n = GetInt();

    if (n > 0 && n <= 3) {
        printf("you picked a small, positive number.\n");
    }
    else if (n > 3 && n <= 10) {
        printf("You picked a medium, positive number.\n");
    }
    else if (n > 10) {
        printf("you picked a huge number.\n");
    }
    else if (n < 0) {
        printf("you picked a negative number.\n");
    }
    else {
        printf("you picked Zero.\n");
    }
}
