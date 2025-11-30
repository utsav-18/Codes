// an=a*r^n-1   
// r = common dividing tearm;
// 1,2,4,8,16,32...

#include <iostream>
using namespace std;
    int main () {

        int n;
        cout<<"Enter n:";
        cin>>n;

        int a=1;
        
        for(int i=1;i<=n;i++){

                cout<<a<<endl;
                a=a*2;

        }


    }