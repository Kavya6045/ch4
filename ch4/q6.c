#include <stdio.h>

int main() {
    int rows, i, j, spaceCount;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Calculate required spaces for alignment
    spaceCount = rows - 1;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= spaceCount; j++) {
            printf(" ");
        }

        // Print ascending numbers in first half
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print descending numbers in second half (mirroring first half)
        if (i != 1) { // Avoid doubling middle number in first row
            for (j = i - 1; j >= 1; j--) {
                printf("%d ", j);
            }
        }

        // Adjust space count for next row
        spaceCount--;

        printf("\n");
    }

    return 0;
}


