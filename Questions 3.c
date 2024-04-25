#include <stdio.h>

int main() {
    int a = 75;
    int b = 5;

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b - i; j++) {
            printf("%d ", a + i + j);
        }
        printf("\n");
    }

    return 0;
}