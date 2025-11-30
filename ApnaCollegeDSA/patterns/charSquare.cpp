#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    char a='A';

    for (int i=1;i<n;i++){
        a='A';
        for (int j=1;j<=n;j++){
            cout<<a;
            a=a+1;
        }
        cout<<"\n";
    } 
}