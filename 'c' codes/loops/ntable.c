#include <stdio.h>
int main () {

int t;
printf("Enter the value of t :");
scanf("%d", &t);

for (int i = t ;i<=(t*10) ; i = i + t) {

    printf("%d " ,i);
}





    return 0;

}