#include <stdio.h>
int main () {

int x,y;

printf("Enter the value of x and y : ");
scanf ("%d %d" , &x,&y);

if (y==0) {
    printf("The point is on x axis");

}
else if (x==0) {

    printf("The point in on the y axis");
}

else {
    printf("The point is in any quadrant");
}
    return 0;
}