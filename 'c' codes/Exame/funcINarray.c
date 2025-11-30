#include <stdio.h>

float avg(int a[]){
float sum=0;
for(int i=0;i<5;i++){
    sum=sum+a[i];

}
return sum/5;

}

    int main(){
        int arr[5]={55,56,54,58,98};
        int *p=arr;
      float ans=avg(p);

    printf("%f",ans)
;
    return 0;

    }

