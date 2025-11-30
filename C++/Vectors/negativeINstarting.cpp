//writen by me;
#include <iostream>
#include <vector>

    using namespace std;
    int main () {

    vector<int>v={1,2,3,-3,-8,-5,-1,0,5,4,-7,8};

int c=0;
cout<<"Original: ";
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

} cout<<"\n";
   for(int i=0;i<v.size();i++){
        if(v[i]<0){
        int temp=v[i];
        v[i]=v[c];
        v[c]=temp;
        c++;
    }

} cout<<"Sorted:   ";

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    }