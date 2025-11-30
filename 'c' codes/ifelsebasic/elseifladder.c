#include <stdio.h>
int main () {
   int p ;

   printf("Enter your percentage :");
   scanf ( "%d ", &p);

if (p<40 ) {
    printf("FALE");
}
else if(p>40 && p<60) {
    printf("C grade");
}
else if (p < 80 &&  p > 60) {
    printf("B grade");
}
else if (p<100 && p> 80) {
    printf("A grade");
}

    return 0;
}


// if we use if and if and if only in this code after the first line every if line will checked and code will give diff. value .
// So , we are using else if ladder method and because of which only after the   first 'if' line  the second line which is 'else if' is excecuted. 