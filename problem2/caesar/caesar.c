#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char plaintext[100];
    char cyphertext[100];
    char base = 'a';
    char* end;

    // check if the user provided the right number of arguments
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // check if the key is a number
    int key = strtol(argv[1], &end, 10);

    if (*end != '\0') {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // get the text from the user
    printf("plaintext:  ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // encrypt the text using caesar's cypher
    for (int i = 0, len = strlen(plaintext); i < len; i++) {
        if (isalpha(plaintext[i])) {
            if (isupper(plaintext[i])) {
                base = 'A';
            } else {
                base = 'a';
            }
            cyphertext[i] = (plaintext[i] - base + key) % 26 + base;
        } else {
            cyphertext[i] = plaintext[i];
        }
    }

    // print the encrypted text
    printf("ciphertext: %s\n", cyphertext);

    return 0;
}