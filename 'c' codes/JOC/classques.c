#include <stdio.h>
int main () {

int total=0;
float average;

for(int i=1;i<=10;i++){
    int a;
      scanf("%d",&a);
       printf(" you entered => %d\n",a);
       total+=a;
     }
  
  printf("%d\n",total);
  average = total/10.0 ;

  printf("%.2f",average);

  return 0;
}