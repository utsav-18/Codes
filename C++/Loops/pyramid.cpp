#include <iostream>
    using namespace std;
        int main () {

            int r;

            cin>>r;

            for(int i=0;i<=r;i++){

                    for(int j=r-i;j>0;j--){

                        cout<<" ";

                    }


                    for(int k=0;k<=2*i;k++){
                        cout<<"*";

                    }

                    cout<<endl;

            }

        }