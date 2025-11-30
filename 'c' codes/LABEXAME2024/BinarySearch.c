#include <stdio.h>
int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int s = sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=s-1;
    int target;printf("Enter target: ");scanf("%d",&target);

    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target) {printf("Found At: %d",mid); break;}
        else if(arr[mid]>9){ hi=mid-1;}
        else {lo=mid+1;}
    }

}