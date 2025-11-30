#include <iostream>
#include <vector>
    using namespace std;

    int main () {

int s;cout<<"Enter size:";cin>>s;

    vector<int>v;

    for(int i=0;i<s;i++){
        int e;
        cout<<"Element "<<i<<" = ";

        cin>>e;
        v.push_back(e);
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

cout<<"\n";


    for(int i=0,j=v.size()-1;i<=j;i++,j--){

    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}