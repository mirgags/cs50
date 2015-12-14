#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char* argv[]) {
    for(int i = 0; i < argc; i++) {
        for(int n = 0; n < strlen(argv[i]); n++) {
            printf("char %i: %c\n", n, argv[i][n]);
        };
    };
    int result = 34;
    printf("touching memory %d: %s\n", result, argv[result]);
};
