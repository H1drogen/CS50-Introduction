#include <stdio.h>

int main() {
    float money = 0;
    int coins = 0;

    while (money < 1) {
        printf("Change owed: ");
        scanf("%f", &money);
    }
    
    while (money >= 25) {
        money -= 25;
        coins++;
    }

    while (money >= 10) {
        money -= 10;
        coins++;
    }

    while (money >= 5) {
        money -= 5;
        coins++;
    }

    while (money >= 1) {
        money -= 1;
        coins++;
    }

    printf("%d\n", coins);
}