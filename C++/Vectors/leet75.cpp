//time complexity is more;
//my code;
#include <iostream>
#include <vector>
    using namespace std;
    int main (){

        vector<int>v={0,2,1,1,2,0,0,1,2};

        cout<<"Original:";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];

}       cout<<"\n";


for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){


    if(v[i]>v[j]){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;

    }
  }
}

    cout<<"Desired:";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];

}       cout<<"\n";



}