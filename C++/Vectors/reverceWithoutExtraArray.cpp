#include <iostream>
#include <vector>
    using namespace std;

// int rev(vector<int> &a){

// for(int i=0;i<a.size();i++){

// if(i==(a.size()/2)) break;

// int temp =a[a.size()-1-i];
// a[a.size()-1-i]=a[i];
// a[i]=temp;

// }

//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }

// }

int main () {
int s;
cout<<"Enter size:";
cin>>s;

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

    for(int i=0;i<v.size();i++){
        if(i==(v.size()/2)) break;
        int temp =v[v.size()-1-i];
        v[v.size()-1-i]=v[i];
        v[i]=temp;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


   // rev(v);

}