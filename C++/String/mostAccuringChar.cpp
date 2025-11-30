#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;
int main(){

string s="utsav raj";
// int max=0;

// for(int i=0;i<s[i]!='\0';i++){
//     char ch=s[i];
//     int count=1;
//    for(int j=i+1;s[j]!='\0';j++){
//         if(s[i]==s[j]) {count++;}
//  } 
//       if(max<count){max=count;}
      
// }

// int count=0;

// for(int i=0;i<s[i]!='\0';i++){
//     char ch=s[i];
//     int count=1;
//    for(int j=i+1;s[j]!='\0';j++){
//         if(s[i]==s[j]) {count++;}
//  } 
//       if(count==max){cout<<ch<<" "<<count<<endl;}
      
// }

//optimised;

vector<int>arr(26,0);
for(int i=0;i<s.length();i++){
     char ch=s[i];
     int ascii=(int)ch;
     arr[ascii-97]++;
}
int mx=0;
for(int i=0;i<26;i++){
     if(arr[i]>mx)mx=arr[i];
}
for(int i=0;i<26;i++){
     if(arr[i]==mx){
          int ascii=i+97;
          char ch=(char)ascii;
          cout<<ch<<" "<<mx<<endl;
     }
}
}