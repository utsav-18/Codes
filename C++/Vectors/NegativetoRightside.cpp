#include <iostream>
#include <vector>
    using namespace std;

    int main() {
    vector<int>v={-3,-3,-8,-5,-1,4,-7,8,10,11,12,-1};
    int i=0,j=v.size()-1,temp;
    cout<<"Before: \n"; 
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<"\n";

while(i<j){
        if(v[i]<0 && v[j]>0){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;j--;
        }
        if(v[i]>0) i++;
        if(v[j]<0) j--;
}
 
cout<<"All negative on one side: \n";

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}

        
    }