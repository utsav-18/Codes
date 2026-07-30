#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    int maxProduct(vector<int>& nums) {
        int chota = nums[0];
        int bada = nums[0];
        int ans = bada;
        for(int i=1;i<nums.size();i++){
            int cur = nums[i];
            int temp = max(cur,max(bada*cur,chota*cur));
            chota = min(cur,min(chota*cur,bada*cur));
            bada = temp;
            ans = max(ans,bada);
        }
        return ans;
    }

int main(){
    vector<int>nums;
    nums= {2,3,-2,4};
    cout<<maxProduct(nums);
}
