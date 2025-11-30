 #include <iostream>
 #include <vector>

 using namespace std;

    int peakIndexInMountainArray(vector<int>& arr) {
        int lo=1;
        int hi = arr.size()-2;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) { return mid;}
            else if(arr[mid]<arr[mid+1]) {lo=mid+1;}
            else hi=mid-1;
        }
        return -1;
    }
    int main(){
        vector<int>a;
        a={1,2,3,4,10,9,8,7};
       int idx = peakIndexInMountainArray(a);
       cout<<idx<<"=>"<<a[idx];

    }