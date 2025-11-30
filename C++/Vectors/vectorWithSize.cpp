#include <iostream>
#include <vector>

    using namespace std;
        int main () {

            vector<int>v(5);   //it automatically gives 0 at every index;  

        cout<<v.size()<<"\n"<<v.capacity()<<"\n";   

  cout<<"Automatically given 0 at each index: ";
        for(int i=0;i<5;i++){   // if you will not give size then it will give error;

            cout<<v[i]<<" ";
        }


cout<<"\n"<<"intentionally given 7 at each index: ";

        vector<int>v2(5,7);  //it will give 7 at each index;

        for(int i=0;i<5;i++){

            cout<<v2[i]<<" ";
        }


    }