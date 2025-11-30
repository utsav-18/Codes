//leet 31;

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

    void nextPerm(vector<int>& nums){

        int n=nums.size();
//finding pivot index;
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
           
            reverse(nums.begin(),nums.end());

            return;
        }

        // sorting after pivot;
        reverse(nums.begin()+idx+1,nums.end());
        //finding the just greatest element than idx;
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        // swaping idx and idx+1;
        int temp=nums[idx];
        nums[idx]=nums[idx+1];
        nums[idx+1]=temp;
        return;

    }


    int main () {

        vector<int>v={1,2,3};
         nextPerm(v);
         for(int i=0;i<v.size();i++){
            cout<<" "<<v[i];
         }

    }