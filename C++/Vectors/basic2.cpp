#include <iostream>
#include <vector>

    using namespace std;
        int main () {

            vector<int>v;  //no need to mention size;

               v.push_back(0);      //v[0]=0;  {
                v.push_back(1);      //v[1]=1;
                 v.push_back(2);      //v[2]=2;   not allowed;
                   v.push_back(3);     //v[3]=3;
                    v.push_back(4);     //v[4]=4;  }

            cout<<v[0]<<" ";
             cout<<v[1]<<" ";
              cout<<v[2]<<" ";
               cout<<v[3]<<" ";
                cout<<v[4]<<" ";

                //push back creates a new space;


        }