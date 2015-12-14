#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

// Function to modulo shift the key
int changeKey(int k) {
    if(k >= 65 && k <= 90) {
        k = k - 65;
    } else {
        k = k - 97;
    };
    if(k >= 26) {
        k = k % 26;
    };
    return k;
};

int main(int argc, string argv[]) {
    // Check for command line arguments
    if(argc != 2) {
        printf("You didn't provide a key!!\n");
        return 1;
    };
    int counter = 0;
    int keyInt = 0;
    string keyString = argv[1];
    int keyReset = strlen(keyString) - 1;
    // Check for non-alphabetic characters
    for(int i = 0; i <= keyReset; i++) {
        keyInt = keyString[i];
        if((keyInt > 90 && keyInt < 97) || keyInt < 65 || keyInt > 122) {
            printf("Only alphabetic characters allowed\n");
            return 1;
        }; 
    };

    char cipherChar;
    string msg = "";

    // Prompt user for a message
    while(strlen(msg) < 1) {
        msg = GetString();
    };

    // Encipher the message by looping through chars
    for(int i=0;i<strlen(msg);i++) {
        // Determine if the char is upper case
        if(msg[i] >= 65 && msg[i] <= 90) {
            keyInt = keyString[counter];
            cipherChar = changeKey(keyInt);
            if(msg[i] + cipherChar > 90) {
                printf("%c", msg[i] + cipherChar - 26);
            } else {
                printf("%c", msg[i] + cipherChar);
            };
            // increment keyword character if appropriate
            if(counter < keyReset) {
                counter += 1;
            } else {
                counter = 0;
            };
        }
        else {
            // Determine if character is lower case
            if(msg[i] >= 97 && msg[i] <= 122) {
                keyInt = keyString[counter];
                cipherChar = changeKey(keyInt);
                if(msg[i] + cipherChar > 122) {
                    printf("%c", msg[i] + cipherChar - 26);
                } else {
                    printf("%c", msg[i] + cipherChar);
                };
                // increment counter if appropriate (needs refactoring)
                if(counter < keyReset) {
                    counter += 1;
                } else {
                    counter = 0;
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
