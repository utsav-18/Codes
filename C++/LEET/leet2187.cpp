#include <iostream>
#include <vector>
using namespace std;

 bool check(long long mid ,vector<int>& time ,int totalTrips){
    long long trips=0;
    for(int i=0;i<time.size();i++){
        trips += mid/(long long)time[i];
    }
    if(trips<(long long)totalTrips) return false;
    else return true;
  }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int mx=-1;
            for(int i=0;i<time.size();i++){
               mx=max(mx,time[i]);
            }
        long long lo=1;
        long long hi = (long long)mx*(long long)totalTrips;
        long long ans = -1;

    while (lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if(check(mid,time,totalTrips)==true) {
            ans = mid;
            hi = mid -1;
        }
        else lo = mid + 1;
    }
        return ans;
    }

  int main(){
    vector<int> v;
    v={1,2,3};
    int totalTrip=5;
    cout<<minimumTime(v,totalTrip);
  }