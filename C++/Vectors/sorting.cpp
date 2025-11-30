#include <iostream>
#include <algorithm>
#include <vector>

    using namespace std;
    int main() {

        vector<int>v;

        v.push_back(10);
        v.push_back(2);
        v.push_back(33);
        v.push_back(4);
        v.push_back(59);

        for(int i=0;i<v.size();i++){
            cout<<v.at(i)<<" ";
        }

        cout<<"\n";

        sort(v.begin(),v.end());

        cout<<"Sorted in increasing order: ";

        for(int i=0;i<v.size();i++){
            cout<<v.at(i)<<" ";
        }



    }
