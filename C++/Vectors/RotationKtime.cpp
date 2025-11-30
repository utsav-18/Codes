#include <iostream>
#include <vector>

using namespace std;

    int main (){

        vector<int>v;
         v.push_back(1);
          v.push_back(2);
           v.push_back(3);
            v.push_back(4);
             v.push_back(5);
              v.push_back(6);
               v.push_back(7);
                v.push_back(8);
                 v.push_back(9);
                  v.push_back(10);
               
        int k;cout<<"Enter k:";cin>>k;
        k=k%10;         //without doing this it will not work in vextors;

    for(int i=0;i<k;i++){
        for(int j=i+1;j<v.size();j++){
            int temp = v.at(i);
            v.at(i) = v.at(j);
            v.at(j) = temp;
        }
    }

    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            int temp = v.at(i);
            v.at(i) = v.at(j);
            v.at(j) = temp;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}