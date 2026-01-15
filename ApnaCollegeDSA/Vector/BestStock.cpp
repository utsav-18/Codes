#include <iostream>
#include <vector>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0, bestBuy = prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]>bestBuy){
                maxPro = max(maxPro,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return maxPro;
    }

int main(){
    vector<int>v;
    v={7,1,5,3,6,4};
    cout<<"Max Profit: "<<maxProfit(v);
}