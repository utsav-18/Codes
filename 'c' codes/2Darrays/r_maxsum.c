#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 2, 3},   //6
        {7, 8, 9},   //24
        {4, 5, 6},   //15
        
    };

int maxSum = -1; // Initialize maxSum to -1 or any suitable minimum value

    for (int i = 0; i < 3; i++) {
        int rowSum = 0;

        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }

    printf("Maximum sum between each row: %d\n", maxSum);

    return 0;
}