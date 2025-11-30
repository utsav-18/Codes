#include <iostream>
using namespace std;
    int main() {
        
        int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
        int n=13;
        int x=3;

        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
        int mid=lo+(hi-lo)/2;
            if(arr[mid]==x)
            {
                if(arr[mid-1]!=x)
                {
                    cout<<"first acurrene of "<<x<<" is at idx: "<<mid;   
                                     break;
                }
                else 
                {
                    hi=mid-1;
                }
            }
            else if(arr[mid]<x) lo=mid+1;
            else hi = mid-1;
        }


    }