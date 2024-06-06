#include <stdio.h>

int mario() {
    char name[50];
    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);
    printf("hello, %s\n", name);

}