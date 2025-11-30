//my code;

#include <iostream>
#include <vector>

using namespace std;


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=0;i<n;i++){
        nums1[i+m]=nums2[i];

    }

        for(int i=0;i<m+n;i++){
            for(int j=i+1;j<m+n;j++){

                if(nums1[i]>nums1[j]){

                    int temp=nums1[i];
                    nums1[i]=nums1[j];
                    nums1[j]=temp;

                }
            }
        }
    }

int main (){


 vector<int>v1={1,3,2,8,7,2};
 vector<int>v2={8,6,4};


    merge(v1,v1.size(),v2,v2.size());

    for(int i=0;i<v1.size()+v2.size();i++){

        cout<<" "<<v1[i];

    }


}