#include <iostream>
using namespace std;

    int countPrimes(int n) {
        int c = 0;

        for(int i=2;i<n;i++){
            int j=2;
            bool flag = true;

            while(j*j<=i){
                if(i%j==0){
                    flag = false;
                    break;
                }
                j++;
            }

            if(flag){
                c++;
            }
        }

        return c;
    }

    int main(){
        cout<<countPrimes(100);
    }