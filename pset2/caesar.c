#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("You didn't provide a key!!");
        return 1;
    };
    int k = atoi(argv[1]);
    if(k >= 26) {
        k = k % 26;
    };
    string msg = "";
    while(strlen(msg) < 1) {
        //printf("Secret message: ");
        msg = GetString();
    };
    for(int i=0;i<strlen(msg);i++) {
        if(msg[i] >= 65 && msg[i] <= 90) {
            if(msg[i] + k > 90) {
                printf("%c", msg[i] + k - 26);
            } else {
                printf("%c", msg[i] + k);
            };
        }
        else {
            if(msg[i] >= 97 && msg[i] <= 122) {
                if(msg[i] + k > 122) {
                    printf("%c", msg[i] + k - 26);
                } else {
                    printf("%c", msg[i] + k);
                };
            }
            else {
                printf("%c", msg[i]);
            }; 
        };
    };
    printf("\n");
    return 0;
};
