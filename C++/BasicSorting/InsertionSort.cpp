#include <iostream>
#include <vector>
    using namespace std;

    int main() {
        int arr[]={5,1,2,6,3,4};
        int s=6;
        
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" "; 
        }cout<<"\n";

        for(int i=1;i<s;i++){
            int j=i;
            while(j>=1 && arr[j] <arr[j-1]) {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }

        for(int i=0;i<s;i++){
            cout<<arr[i]<<" "; 
        }
    } 

    //Time complexity is O(n^2) worst case
    //                   O(n) in normal case