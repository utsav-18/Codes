#include <iostream>
#include <vector>
using namespace std;
    int main(){
        vector<int>v;
        v={5,0,1,2,0,0,4,0,3};  // 1,2,4,3,0,0,0,0,0

        // int i=0;
        // int j=v.size()-1;
        // while(i<j){
        //     if(v[j]==0){j--;}
        //     else if(v[i]==0){
        //         swap(v[i],v[j]);
        //         i++;
        //         j--;
        //     }
        //     else i++;

        //  }

        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
               if(v[i]==0) swap(v[i],v[j]);
            } 
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" "; 
        }

    }