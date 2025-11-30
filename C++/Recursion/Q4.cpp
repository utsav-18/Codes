//Print index of a given element in an array. If not present, print -1.
#include <iostream>
using namespace std;


int find(int x,int y){
int arr[5]={1,2,3,4,5};

    if(y>4) return -1;
    if(arr[y]==x) return x;
    else return find(x,y+1);

}

int main() {
    int n;cout<<"Enter a num: ";cin>>n;
    cout<<find(n,0);

}

