#include <iostream>
#include <algorithm>
#include <vector>

    using namespace std;

    int main () {

        vector<int>v;

        v.push_back(10);
        v.push_back(0);
        v.push_back(1);
        v.push_back(4);
        v.push_back(5);

   sort(v.begin(),v.end());

    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }


//need correction;

    }