#include <iostream>
using namespace std;

int main(){
    string s;cout<<"Enter a Roman Number: ";
    cin>>s;
    int i=0;
    int num=0;  

    while(s[i]!='\0'){
        if(s[i]=='I'){
            if(s[i+1]=='V' || s[i+1]=='X') num=num-2;
            num=num+1;
            i++;
        }
        else if(s[i]=='V'){
            num=num+5;
            i++;
        }
        else if(s[i]=='X'){
            if(s[i+1]=='L' || s[i+1]=='C') num=num-20;
            num=num+10;
            i++;
        }
        else if(s[i]=='L'){
            num=num+50;
            i++;
        }
        else if(s[i]=='C'){
            if(s[i+1]=='D' || s[i+1]=='M') num=num-200;
            num=num+100;
            i++;
        }
        else if(s[i]=='D'){
            num=num+500;
            i++;           
        }
        else if(s[i]=='M'){
            num=num+1000;
            i++;
        }
    }

    cout<<num;
}