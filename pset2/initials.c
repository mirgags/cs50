#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    string name = "";
    while(strlen(name) < 3) {
        name = GetString();
    }
    //char *initial1 = "";
    //char *initial2 = "";
    for(int i=0;i<strlen(name);i++) {
        if(i == 0) {
           //strncpy(initial1, name[i], 1);
            if(name[i] > 90) {
                printf("%c", name[i] - 32);
            }
            else {
                printf("%c", name[i]);
            };
        } else {
            if(name[i] == ' ') {
                //strncpy(initial2, name[i+1], 1);
                if(name[i + 1] > 90) {
                    printf("%c", name[i+1] - 32);
                }
                else {
                    printf("%c", name[i+1]);
                };
            };
        };
    };
    printf("\n");
    //printf("%c%c", initial1, initial2);
};
