#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double MaxAvg(vector<int>& nums, int k) {

    int sum = 0;
    for(int i=0;i<k;i++){
        sum += nums[i];
    }

    double maxavg = (double)sum / k;

    int left=0;

    for(int right=k;right<nums.size();right++){
        sum -= nums[left++];
        sum += nums[right];
        
        double avg = (double)sum / k;

        maxavg = max(maxavg,avg);

    }

    return maxavg;

}

int main() {
    vector<int> v = {1,12,-5,-6,50,3};
    int k = 4;

    cout << MaxAvg(v, k);
}