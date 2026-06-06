#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int findMin(vector<int>& nums) {
        priority_queue<int, vector<int> , greater<int> > pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        return pq.top();
    }

int main(){
    vector<int>nums;
    nums={3,4,5,1,2};
    cout<<findMin(nums);
}