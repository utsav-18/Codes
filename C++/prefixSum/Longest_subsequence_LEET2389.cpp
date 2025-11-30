#include <iostream>
#include <vector>
#include <algorithm>
    using namespace std;

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
            vector<int>ans(queries.size());
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++){
                nums[i] += nums[i-1];
            }
            for(int i=0;i<queries.size();i++){
                int maxlen = 0;
                    // binary Search;
                    int lo=0;int hi=nums.size()-1;
                    while(lo<=hi){
                        int mid = lo+(hi-lo)/2;
                        if(nums[mid]>queries[i]) hi = mid-1;
                        else{
                            maxlen = mid+1;
                            lo = mid+1;
                        }
                    }
                    ans[i] = maxlen;
            }
            return ans;
    }

    int main() {
        vector<int>nums(5);
        nums={4,5,2,1};
        vector<int>queries(3);
        queries={3,10,21};
        
        vector<int>fans;
        fans = answerQueries(nums,queries);

            for(int i=0;i<fans.size();i++){
                cout<<fans[i]<<" ";
            }

    }