#include <iostream>
#include <vector>

    using namespace std;
        int main () {

            vector<int>v(5);  //if we will not declare size it will give error;

            for(int i=0;i<5;i++){
                cin>>v[i];
            }

            for(int i=0;i<5;i++){
                cout<<v[i]<<" ";
            }


        }