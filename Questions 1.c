#include <stdio.h>
int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Odd numbers from 1 to %d are: ", N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}