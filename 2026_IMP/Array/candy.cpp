#include <iostream>
#include <vector>
using namespace std; 

int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int>candies(n,1);
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            candies[i] = candies[i-1] + 1;
        }
    }

    for(int i=2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            candies[i] = max(candies[i],candies[i+1]+1);
        }
    }

    int total = 0;
    for(int c : candies){
        total+=c;
    }

    return total;

}

int main(){
    vector<int>v;
    v={1,2,2};
    cout<<candy(v)<<" Candies are needed!!";

}

// The key insight

// The whole algorithm boils down to this:

// 1.Initialize everyone with 1 candy.
// 2.Left → Right: Ensure every child with a higher rating than the left neighbor gets more candies.
// 3.Right → Left: Ensure every child with a higher rating than the right neighbor gets more candies, without breaking the work done in step 2 (that's why max() is used).
// 4.Sum all the candies.