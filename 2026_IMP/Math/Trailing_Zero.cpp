#include <iostream>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        while (n > 0) {
            n /= 5;
            count += n;
        }

        return count;
    }
};

    int fact(int n){
        int f = 1;
        for(int i=1;i<=n;i++){
            f = f*i;
        }
        return f;
    }

    int trailingZeroes(int n) {
        n = fact(n);
        int t = 0;

        int digit = 0;

        while(n>0){
            digit = n%10;
            if(digit!=0){
                return t;
            }
            else{
                t++;
            }
            n /= 10;
        }

        return t;

    }

int main(){
    int n = 12300;
    cout<<trailingZeroes(n);
}