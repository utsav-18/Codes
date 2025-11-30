#include <stdio.h>
int main () {

int arr[5]={2,3,4,5,6};
int brr[5]={7,4,3,2,9};
int same;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(arr[i]==brr[j]) {same=arr[i];
        printf("%d\n",same);}
        

    }
}

    return 0;

}