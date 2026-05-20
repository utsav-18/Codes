#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        int profit = 0;
        for (int i=0;i<prices.size();i++){
            if(prices[i]<m){
                m=prices[i];
            }
            profit = max(profit,prices[i]-m);
        }
        return profit;
    }


int main(){
    vector<int> prices;
    prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}