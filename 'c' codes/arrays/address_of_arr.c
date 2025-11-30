#include <stdio.h>
int main () {


int arr[5]={1,2,3,4,5};


for(int i=0;i<=4;i++){
    
    printf("  Address of arr[%d] = %p\n",i,&arr[i]);             // %p is pointer
}


    return 0;

}