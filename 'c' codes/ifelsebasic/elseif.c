#include <stdio.h>
int main () {
   int p ;

   printf("Enter your percentage :");
   scanf ( "%d ", &p);

if (p<40 ) {
    printf("FALE");
}
else if(p>40 && p<60) {
    printf("Pass");
}
else if (p < 80 &&  p > 60) {
    printf("Good");
}
else if (p<100 && p> 80) {
    printf("Well done");
}

    return 0;
}
