#include <iostream>
using namespace std;
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){
         for(int i=1;i<=n;i++){
                ans=ans*x;
            }
            return ans;
        }
        else {
            n=-n;
            for(int i=1;i<=n;i++){
            ans=ans*x;
            }
            return 1/ans; 
        }
    }

    int main () {

        double a=2;
        int b=-2;
         double ans=myPow(a,b);
         cout<<ans;


    }

