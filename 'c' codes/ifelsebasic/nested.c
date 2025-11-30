#include <stdio.h>
int main () {
    int a,b,c;

    printf("Enter the value a: ");
    scanf("%d ",&a);
     printf("Enter the value b: ");
     scanf("%d ",&b);
      printf("Enter the value c :");
      scanf("%d ",&c);

      if(a>b) {
        if(a>c)
      printf("%d is greatest", a);

      else
      printf("%d id greatest", c);
      }

    else {
        if(b>c)
        printf("%d is greatest", b);
        else 
        printf("%d is greatset",c);
    }
    return 0;
}