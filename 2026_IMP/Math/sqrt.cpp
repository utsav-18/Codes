#include <iostream>
#include <vector>
using namespace std;

int sqrt(int num){
    int l = 1;
    int r = num/2;
    int ans = 0;

    while(l<=r){
        int mid = l + (r-l)/2;
        if((long long)mid*mid == num){
            return mid;
        }
        if((long long)mid*mid < num){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }

    return ans;

}

int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<sqrt(num);
}