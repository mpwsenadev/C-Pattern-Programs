#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d", i); // Print the value of i
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
