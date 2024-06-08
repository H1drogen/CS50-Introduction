#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    char text[1000];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    float letters = 0;
    float words = 0;
    float sentences = 0;

    for (int i = 0; text[i] != '\n'; i++) {
        if (isalpha(text[i])) {
            letters++;
        }
        if (isspace(text[i])) {
            words++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }

    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1) {
        printf("Before Grade 1\n");
    } else if (index >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", index);
    }

}