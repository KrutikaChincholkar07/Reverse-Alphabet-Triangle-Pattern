#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);

    int n = ch - 'A' + 1;

    for (int i = 0; i < n; i++) {
        for (char c = ch - i; c <= ch; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}
