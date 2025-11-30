#include <iostream>
using namespace std;

void fun(char c){
    if(c>='a' && c<='z'){
        cout<<"Lower Case Letter";
    }
    else if(c>='A' && c<='Z'){
        cout<<"Upper Case Letter";
    
    }
    else{
        cout<<c<<" : Symbol";
    }
}

int main(){
    char c;
    cin>>c;
    fun(c);
}