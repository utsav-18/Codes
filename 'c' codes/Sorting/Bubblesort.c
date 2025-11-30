#include <stdio.h>

int main() {

int arr[5]={5,4,3,2,1};
int n=5;
int temp;

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}

//bubble sort  

/*

(not optimised)
for(int i=0;i<n-1;i++){
    for(int j=0;j<=n-2;j++){
           if(arr[j]>arr[j+1]){
            temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
    }
}

*/

//optimised 1.0=>



for(int i=0;i<n-1;i++){
    for(int j=0;j<=n-1-i;j++){
           if(arr[j]>arr[j+1]){
            temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
    }
}



//optimised 2.0=>

/*

for(int i=0;i<n-1;i++){
    bool flag= ture;
    for(int j=0;j<=n-1-i;j++){
           if(arr[j]>arr[j+1]){
            temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
           flag=false;
        }
    }
    if(flag==true) break;
}

*/


printf("\n");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

    return 0;
 }