#include <iostream>
#include <string>

    using namespace std;
        int main () {

            string s;

    cout<<"Write: ";

        getline(cin,s);

     cout<<"You enterd: ";
     cout<<s<<"\n";

for(int i=0;s[i]!='\0';i++){
    if(i%2==0) s[i]='a';          //if you will write 0 instead of '0' output will be space only;
}

    cout<<"Changed value: "<<s;

        }