#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

    int main() {
        int x=0;

    int arr[]={19,12,23,8,16};
    vector<int>v(5,0);
        for(int i=0;i<5;i++){
            int min = INT_MAX;
            int minidx = -1;
            for(int j=0;j<5;j++){
                if(v[j]==1) continue;
                else {
                    if(min>arr[j]){
                        min = arr[j];
                        minidx = j;
                    }
                }
            }
            arr[minidx]=x;
            v[minidx] = 1;
            x++;
        }

         for(int i=0;i<v.size();i++){
            cout<<arr[i]<<" ";
         }

    }