#include <iostream>
#include <vector>
    using namespace std;
    int main () {

        vector<int>v;
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);

int count=0;

cout<<"Original: ";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}
cout<<"\n";

for(int i=0;i<v.size();i++){
    if(v[i]==0) count++;

}

for(int i=0;i<v.size();i++){

    if(i+1<=count) v[i]=0;
    else v[i]=1;
}

cout<<"Sorted:   ";

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}

    }