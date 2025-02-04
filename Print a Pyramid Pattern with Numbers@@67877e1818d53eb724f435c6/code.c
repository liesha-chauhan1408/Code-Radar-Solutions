#include <stdio.h>

int main() {
    int i, j, space, rows;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for rows
    for(i = 1; i <= rows; i++) {
        // Print leading spaces for centering
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
