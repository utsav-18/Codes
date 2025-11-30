#include <stdio.h>
int main () {

int arr[5];


for(int i=0;i<=4;i++){
    printf("Enter arr[%d] = ",i);
    scanf("%d",&arr[i]);
    printf("arr[%d]=%d\n",i,arr[i]);
}

printf("=>  Formed array is =  \n");
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}


printf("\n=>  reverced is =  \n");

for(int i=4;i>=0;i--){
    printf("%d ",arr[i]);

}

    return 0;

}