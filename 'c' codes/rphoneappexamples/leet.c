#include <stdio.h>
int main () {

int arr[5]={1,2,3,4,5};
int n=5;
int k=2;
int temp;

// printf("Enter K:");
// scanf("%d",&k);

for (int i =1;i<=k;i++){

arr[n-i]=arr[i];
arr[i+1]=arr[i];


}




for(int j=0;j<n;j++){
    printf("%d ",arr[j]);

}

    return 0;
}