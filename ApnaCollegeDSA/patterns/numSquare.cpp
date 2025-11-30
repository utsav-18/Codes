#include<iostream> 
using namespace std;

void repeatingSquare(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    } 
    cout<<"\n";
}

void nonrepeatingSquare(int n){
    int num=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    } 
    cout<<"\n";
}

int main(){
int n=3;
    repeatingSquare(n);
        nonrepeatingSquare(n);
}