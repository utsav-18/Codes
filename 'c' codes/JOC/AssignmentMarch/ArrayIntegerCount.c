#include <stdio.h>
    int main () {

        int arr[] = {5,4,1,2,3,6,11,13};

        int count =sizeof(arr) / sizeof(arr[0]);  //total memory divided by one (int)'s memory 

        printf("%d",count);


        return 0;

    }