#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] == target) {
                result[0] = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] == target) {
                result[1] = i;
                break;
            }
        }

        return result;
    }

    int main() {
        vector<int>v;
        v={1,2,3,4,5,6,2,7,8,9,0};
        int t=2;
        vector<int>ans;
        ans=searchRange(v,t);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }