//it uses the ascci value of characters;

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;          // try:- Name
    cout<<"Write: ";
    //cin>>s;
    
    getline(cin,s); //for checking what is happening will the spaces;

    int n=s.size();

    sort(s.begin(),s.end()); //it will sort in alphabetical order;


    cout<<"Sorted in alphabetical manner: "<<s;
}