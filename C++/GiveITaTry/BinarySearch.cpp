#include <iostream>
using namespace std;
    int main() {

        int arr[]={1,2,3,4,5,6,7,8,9};
        int size=9;

            int lo=0;
            int hi=size-1;

            while(lo<=hi){
                int mid=hi-lo/2;
                if(arr[mid]==3) {cout<<"Found";break;}
                else if(arr[mid]>1) hi=mid-1;
                else lo=mid+1;
            }


    }