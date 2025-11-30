#include <stdbool.h>
#include <stdio.h>


int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    bool flag = false;

    for (int i = 0; i < 5; i++) {
        if (a[i] == x) {
            flag = true;
            break; // Once found, no need to continue searching
        }
    }

    if (flag) {
        printf("%d exists in the array.\n", x);
    } else {
        printf("%d does not exist in the array.\n", x);
    }

    return 0;
}
