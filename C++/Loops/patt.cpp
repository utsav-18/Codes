#include <iostream>
using namespace std;

    int main (){

            for(int i=0;i<=5;i++){


                for(int j=0;j<=i;j++){

                    cout<<" ";

                }

                for(int k=(5-i)*2;k>=0;k--){
                    cout<<"*";

                }

                cout<<"\n";

            }

    }