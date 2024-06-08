#include <stdio.h>
#include <ctype.h>

int main() {
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char word1[50];
    char word2[50];
    int score1 = 0;
    int score2 = 0;

    printf("Player 1: ");
    scanf("%s", word1);

    for (int i = 0; word1[i] != '\0'; i++) {
//        characters are represented by their ASCII values, which are integers. This can be used to calculate the index of the character in the scores array.
        score1 += scores[toupper(word1[i]) - 'A'];
    }

    printf("Player 2: ");
    scanf("%s", word2);

    for (int i = 0; word2[i] != '\0'; i++) {
//        characters are represented by their ASCII values, which are integers. This can be used to calculate the index of the character in the scores array.
        score2 += scores[toupper(word2[i]) - 'A'];
    }

    if (score1 > score2) {
        printf("Player 1 wins!");
    } else if (score1 < score2) {
        printf("Player 2 wins!");
    } else {
        printf("Tie!\n");
    }

    return 0;
}

