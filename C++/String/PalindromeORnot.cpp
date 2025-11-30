#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    string str;cout<<"Enter a string:";getline(cin,str);
    int i=0,j=str.size()-1;
    bool flag=true;

    while(i<j){
        if(str[i]!=str[j]){
            flag=false;
        }
        i++;
        j--;
    }

    if(flag==true){cout<<"Yes";}
    else cout<<"No";

}