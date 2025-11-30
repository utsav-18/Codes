//permutation = factorial of that number;

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

    for(int i=0;i<y;i++){
        cout<<a[i]<<" ";
        
    }
    
    cout<<"\n";

}


void Nextpermutation (vector <int>& v) {

    for(int i=0;i<v.size();i++){
        rotation(i,v.size(),v);
    }


}


    int main () {

vector<int>v={4,5,6};

    Nextpermutation(v);


    }