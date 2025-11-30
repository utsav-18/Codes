 #include <iostream>
 #include <vector>
 #include <climits>
    using namespace std;
    
        // int longestOnes(vector<int>& nums, int k) {
        //         int i=0;
        //         int j=0;
        //         int m=0;
        //         int flips;
        //         int maxLength = INT_MIN;

        //         while(i<nums.size()){
        //             flips=k;
        //             j=i;
        //             i++;
        //             m=0;
        //             while(flips!=0 || j<nums.size()){
        //                 if (nums[j]==1) {
        //                     j++;
        //                     m++;
        //                         }
        //                 else {
        //                     nums[j]=1;
        //                     flips--;
        //                     m++;
        //                         }
        //                 maxLength = m;
        //             }
        //             maxLength = max(maxLength,m);
        //         }
        //         return maxLength;
        //     }

                int longestOnes(vector<int>& nums, int k) {
                int n=nums.size();
                int flips=0, i=0, j=0;
                int maxLen = INT_MIN , len = INT_MIN;
                    while(j<n){
                        if(nums[j]==1) j++;
                        else {
                            if(flips<k){
                                flips++;
                                j++;
                            }
                            else {
                                len = j-i;
                                maxLen = max(maxLen,len);
                                while(nums[i]==1) i++;
                                i++;
                                j++;
                            }
                        }
                         len = j-i;
                         maxLen = max(maxLen,len);
                    }
                    return maxLen;
            }


        int main(){
            int arr[] = {1,1,1,0,0,0,1,1,1,1,0};
            int n = sizeof(arr)/sizeof(arr[0]);
            int k = 2;
            vector<int>v(arr,arr+n);
            cout<<longestOnes(v,k);
        }