#include <stdio.h>
 int main() {

 int arr[7]={1,2,3,4,5,6,7};
 int sum1=0;
 int sum2=0;

for(int i=0;i<7;i++){
 
 if (i%2==0) sum1 =sum1+arr[i];
 else sum2=sum2+arr[i];

}

printf("Sum of even & odd index elements is : %d\n",sum1+sum2);
printf("difference of even & odd index elements is : %d",sum1-sum2);
    return 0;
}