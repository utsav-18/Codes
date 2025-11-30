//retrun type 

#include <iostream>
    using namespace std;

    int sum(int x){
        
        if(x>=1)
          return x+sum(x-1);

            }
        
        
        int main () {
        int a;
        cout<<"Enter a:";cin>>a;

        cout<<sum(a);

        } 
        
         
/*

 parameterised ;

#include <iostream>
    using namespace std;
         
         void sum1toN(int sum , int n){
            if(n==0){
                cout<<sum<<endl;
                return;
            }
            sum1toN(sum+n,n-1);
         }

    int main(){
        sum1toN(0,10);
    }


*/


