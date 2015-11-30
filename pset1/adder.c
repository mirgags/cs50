#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me a number: ");
    int x = GetInt();
    printf("Please give me another number: ");
    int y = GetInt();
    printf("The sum of %d and %d is %d.\n", x, y, x + y);
}
