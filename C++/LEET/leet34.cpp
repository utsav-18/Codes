 #include <iostream>
 #include <vector>
 using namespace std;

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2,-1);
        int lo=0;
        int hi=nums.size()-1;

            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target){
                    if(nums[mid-1]!=target){
                     v.clear();
                     v.push_back(mid);
                     break;
                     } 
                     else hi=mid-1;
                 }
                 else if(nums[mid]>target) {
                    hi=mid-1;
                 } 
                 else lo=mid+1;
                 }

         lo=0;
         hi=nums.size()-1;

             while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target){
                    if(nums[mid+1]!=target){
                     v.push_back(mid);
                     break;
                     } 
                     else lo=mid+1;
            }
                 else if(nums[mid]>target) {
                    hi=mid-1;
                 } 
                 else lo=mid+1;
                 }
                 
                 return v;
    }
    int main() {
        vector<int>a;
        a={1,2,2,3,3,3,3,4,5};
        vector<int>ans;
       ans= searchRange(a,3);
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
    }