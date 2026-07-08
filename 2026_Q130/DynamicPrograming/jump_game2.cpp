#include <iostream>
#include <vector>
using namespace std;

int Jump(vector<int>& nums) {
    int jump = 0;
    int currMax = 0;
    int currEnd = 0;
    for(int i=0;i<nums.size()-1;i++){
        currMax = max(currMax,i+nums[i]);
        if(i==currEnd){
            jump++;
            currEnd = currMax;
        }
    }
    return jump;
}


int main(){
    vector<int>v;
    v={2,3,1,1,4};
    cout<<Jump(v);

}