#include <stdio.h>

int main() {
    int height = 0;

    while (height < 1) {
        printf("Height: ");
        scanf("%d", &height);
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        printf("\n");
    }
}