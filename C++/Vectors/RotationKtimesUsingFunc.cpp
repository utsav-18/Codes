#include <iostream>
#include <vector>

using namespace std;

    int rotation (int x,int y,vector<int>&a) {

        for(int i=0;i<x;i++){
           for(int j=i+1;j<y;j++){
                int temp = a.at(i);
                a.at(i) = a.at(j);
                a.at(j) = temp;
        }
    }
}   
    int main (){
    vector<int>v;
    int s;cout<<"Entre size: ";cin>>s;
    int e;

    for(int i=0;i<s;i++){
        cout<<"Enter element "<<i<<":";
        cin>>e;
        v.push_back(e);
    }
        // v.push_back(1);
        //  v.push_back(2);
        //   v.push_back(3);
        //    v.push_back(4);
        //     v.push_back(5);
        //      v.push_back(6);
        //       v.push_back(7);
        //        v.push_back(8);
        //         v.push_back(9);
        //          v.push_back(10);
              
        int k;cout<<"Enter k:";cin>>k;
        k=k%10;         //without doing this it will not work in vextors;

    rotation(k,v.size(),v);
    
    rotation(k,k,v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}