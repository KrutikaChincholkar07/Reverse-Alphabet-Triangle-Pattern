#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (char ch = 'E' - i; ch <= 'E'; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
