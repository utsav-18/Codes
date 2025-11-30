#include <iostream>
#include <string>

    using namespace std;
        int main () {

            string s;
       //     cin>>s;   //it will work just for a word;

    cout<<"Write: ";

        getline(cin,s);

     cout<<"You enterd: ";

            cout<<s<<"\n";

            s[0]='U';          //updation of single character is possible;  //only possible in c & c++;

            cout<<"Changed value: "<<s;



        }