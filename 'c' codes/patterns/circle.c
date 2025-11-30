#include <stdio.h>
#include <math.h>

int main() {
    int radius, i, j;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Iterate through each row
    for (i = -radius; i <= radius; i++) {

        // Iterate through each column
        for (j = -radius; j <= radius; j++) {

            // Check if the point (i, j) is inside the circle using the equation of a circle
            if (sqrt(i*i + j*j) <= radius + 0.5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}