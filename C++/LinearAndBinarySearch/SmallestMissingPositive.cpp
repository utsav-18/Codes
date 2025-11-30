#include <iostream>
#include <vector>
using namespace std;
    // int main(){

    //     int arr[] = {0,1,2,3,4,6,7,8,9};
    //     //int arr[]={4,5,10,11};

    //     int n=9;
    //     int lo=0;
    //     int hi=n-1;
    //     int ans=-1;
    //         while(lo<=hi){
    //             int mid = lo + (hi-lo)/2;
    //                 if(arr[mid]==mid)   lo = mid+1;
    //                 else{
    //                     ans = mid;
    //                     hi=mid-1;
    //                 }
    //         }
    //         cout<<ans;
    // }

 int findSmallestMissing(vector<int>& arr) {
    int lo = 0;
    int hi = arr.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

         if (arr[mid] != mid && (mid == 0 || arr[mid - 1] == mid - 1)) {
            return mid;
         }   
             if (arr[mid] == mid) {
            lo = mid + 1;
             } else {
                hi = mid - 1;
            }
        }
     return arr.size();
 }

    int main() {
        vector<int>v;
        v={4,5,10,11};
        cout<<findSmallestMissing(v);
    }
 