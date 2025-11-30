#include <stdio.h>
int main() {

/*best efficient code for both time and space complexity (for this question)*/

int arr[11]={6,1,7,3,2,5,4,8,9,8,10};
int sum=0;


for(int i=0;i<11;i++){

  sum=sum+arr[i];

}

printf("%d\n",sum);

int sn = (10*11)/2;

printf("%d\n",sn);

printf("it have twin: %d",sum-sn);


  return 0;

}