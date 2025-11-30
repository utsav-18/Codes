#include <stdio.h>
int main () {

//  int arr[]={2,4,6,8,10};

//  for(int i =0;i<=4;i++){
//     printf("arr[%d]=%d\n",i,arr[i]);++

//  }

int arr[5];


for(int i=0;i<=4;i++){
    printf("Enter arr[%d] = ",i);
    scanf("%d",&arr[i]);
    printf("arr[%d]=%d\n",i,arr[i]);
}

//printf(" arrays formed is = { %d ,%d ,%d ,%d ,%d }",arr[0],arr[1],arr[2],arr[3],arr[4]);

for(int i=0;i<5;i++){
printf("%d ",arr[i]);

}
    return 0;

}