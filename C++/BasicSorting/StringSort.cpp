#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int main() {
        string s = "AZYZXBYDXJK";
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='X') {
                str.push_back(s[i]);
            }
        }

        cout<<str<<"\n";
        sort(str.begin(),str.end());

        /* Not working  */
        // for(int i=0;i<str.size()-1;i++){
        //     for(int j=i+1;j<str.size()-1;j++){
        //         if((int)s[j]>(int)s[j+1]){
        //             swap(s[j],s[j+1]);
        //         }
        //     }
        // }

        cout<<str;
       
    }