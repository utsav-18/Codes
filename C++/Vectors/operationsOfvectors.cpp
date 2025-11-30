#include <iostream>
#include <vector>

    using namespace std;
    int main (){

        vector<int>v;

        v.push_back(1);
        v.push_back(1);
        v.push_back(5);
        v.push_back(9);
        v.push_back(10);
        v.push_back(14);
        v.push_back(1);
        v.push_back(1);
        v.push_back(5);
        v.push_back(9);
        v.push_back(10);
        v.push_back(14);

        for(int i=0;i<v.size();i++){
            cout<<" "<<v[i];
        }

        v.pop_back();  //it will reduce one last element;

        cout<<"\n";

        for(int i=0;i<v.size();i++){    // size will autometically updated after pop_back;
            cout<<" "<<v[i]; 
        }
            //after doing pop back capacity will not decrease;
        

    }