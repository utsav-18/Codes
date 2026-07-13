#include <iostream>
#include <vector>
using namespace std;

    // int countPrimes(int n) {
    //     int c = 0;

    //     for(int i=2;i<n;i++){
    //         int j=2;
    //         bool flag = true;

    //         while(j*j<=i){
    //             if(i%j==0){
    //                 flag = false;
    //                 break;
    //             }
    //             j++;
    //         }

    //         if(flag){
    //             c++;
    //         }
    //     }

    //     return c;
    // }

   int countPrimes(int n) {
        vector<bool>prime(n,true);
            if(n<2){
                return 0;
            }
        prime[0] = false;
        prime[1] = false;

        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int j=i*i;j<n;j=j+i){
                    prime[j]=false;
                }
            }
        }

        int c=0;
        for(int i=0;i<n;i++){
            if(prime[i]){
                c++;
            }
        }
        return c;
    }


    int main(){
        cout<<countPrimes(100);
    }