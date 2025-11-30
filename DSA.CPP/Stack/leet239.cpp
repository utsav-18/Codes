#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            vector<int>ans;
                //incomplete;
        }
    };

    int main(){
        vector<int> v;
        v={1,3,-1,-3,5,3,6,7};
        Solution s;
        int k=3;
        vector<int>ans;
        ans=s.maxSlidingWindow(v,k);

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }