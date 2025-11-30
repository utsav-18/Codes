#include <iostream>
#include <vector>
#include <climits>
    using namespace std;
    int main() {
        
        vector<int>v;
         v={5,4,1,3,8};

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<"\n";
        
        for(int i=0;i<v.size();i++){
            int min = INT_MAX;
             int minidx=-1;
            for(int j=i;j<v.size();j++){
                if(v[j]<min) {
                    min=v[j];
                    minidx=j;
                }
            }    
            swap(v[minidx],v[i]);        
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }