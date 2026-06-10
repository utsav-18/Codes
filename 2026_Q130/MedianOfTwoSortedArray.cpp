#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int m = n1 + n2;

        vector<int> ans;
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            ans.push_back(nums2[j]);
            j++;
        }
        // Find median
        if (m % 2 == 0) {
            return (ans[m / 2] + ans[m / 2 - 1]) / 2.0;
        } else {
            return ans[m / 2];
        }
    }


int main(){
vector<int>nums1;
vector<int>nums2;
nums1={1,3};
nums2={2,4};
cout<<findMedianSortedArrays(nums1,nums2);
}