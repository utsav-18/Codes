#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    int maxArea(vector<int>& height) {
        int maxA=0;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int w = right-left;
            int area = min(height[left],height[right])*w; //min h because water can be stored until the shorter wall only!
            maxA = max(maxA,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxA;
    }

int main(){
    vector<int> height ;
    height  = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
}