//3 pointer algorithm (dutch flag algorithm);

#include <iostream>
#include <vector>
    using namespace std;
    int main (){

        vector<int>v={0,2,1,1,2,0,0,1,2};

        cout<<"Original:";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];

}       cout<<"\n\n";





int lo=0;
int mid=0;
int hi=v.size()-1;

    while(mid<=hi){
        if(v[mid]==2){

            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp; //2
          hi--;

        }
        else if(v[mid]==0){

            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp; //0
          lo++;
          mid++;

        }
        else mid++; //1
    }

    cout<<"Original:";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];

}       cout<<"\n";

}
