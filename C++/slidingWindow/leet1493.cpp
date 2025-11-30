#include <iostream>
#include <vector>
#include <climits>
    using namespace std;

    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zerosPos = -1;
        int i = 0;
        int j = 0;
        int maxLen = 0;
        int count = 0;
            while(j<n){
                int prev = zerosPos;
                if(nums[j]==0){
                    count++;
                    zerosPos=j;
                }
                if(count <=1 ) j++;
                else {
                    maxLen = max(maxLen,j-i);
                    i = prev +1;
                    count--;
                    j++;
                }
            }
            maxLen = max(maxLen,j-i);
            return maxLen-1;
    }

        int main() {
            int arr[]={0,1,1,1,0,1,1,0,1};
            int n = sizeof(arr)/sizeof(arr[0]);
            vector<int>v(arr,arr+n);
                cout<<longestSubarray(v);

        }
