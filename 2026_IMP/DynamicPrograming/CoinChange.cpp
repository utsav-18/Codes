#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int coinChange(vector<int>& coins, int amount) {
        vector<int>amt(amount+1,amount+1);
        amt[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<=coins.size();j++){
                if(i>=coins[j]){
                    amt[i] = min(amt[i],1+amt[i-coins[j]]);
                }
            }
        }
        if(amt[amount]<amount+1){
            return amt[amount];
        }
        return -1;
    }

    int main(){
        vector<int>coins;
        coins = {1,2,5};
        int amout = 11;
        cout<<coinChange(coins,amout);
    }