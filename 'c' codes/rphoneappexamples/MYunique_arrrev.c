#include <stdio.h>
int main () {

int arr[5]={1,2,3,4,5};
int n=5;
//int k;
int temp;

//printf("Enter K:");
//scanf("%d",&k);

for(int i =0;i<=2;i++){

temp=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=temp;


}

for(int j=0;j<n;j++){
    printf("%d ",arr[j]);

}

    return 0;
}