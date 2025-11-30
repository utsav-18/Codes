#include <iostream>
#include <vector>
#include <climits>
using namespace std;

  bool check(int speed,vector<int> &piles,int h){
    int s=piles.size();
    int count=0;
    for(int i=0;i<s;i++){
        if(count>h) return false;
        if(speed>=piles[i]) count++;
        else if(piles[i] % speed == 0) count += piles[i]/speed;
        else count += piles[i]/speed + 1;
    }
    if(count>h) return false;
    else return true;

 }
 
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=piles.size();
        int mx=INT_MIN;
        for(int i=0;i<s;i++){
           mx=max(mx,piles[i]);
        }
        int lo=1;
        int hi=mx;
        int minh = -1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
             if(check(mid,piles,h)==true){
                minh=mid;
                hi=mid-1;
             }
             else lo=mid+1;
        }
        return minh;
    }


int main() {
    vector<int>v;
    v={30,11,23,4,20};
    int h=5;
    cout<<"Minimum Speed will be : "<<minEatingSpeed(v,h);
}