#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i = 0;i<n;i++){
            int rem = target - nums[i];
            if(m.find(rem)!=m.end()){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            else m[nums[i]] = i;
        }
        return ans;
    }

    int main(){
        vector<int>ans;
        vector<int>sumtwo;

        ans = {2,4,5,11,4};

        sumtwo=twoSum(ans,7);

        for(int i = 0;i<sumtwo.size();i++){
            cout<<sumtwo[i]<<" ";
        }
    }
