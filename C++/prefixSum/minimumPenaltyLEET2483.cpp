#include<iostream>
#include <vector>
#include <climits>
using namespace std;

int bestClosingTime(string customers) {
    int s = customers.size();
    int minp=0;
    vector<int> pre(s+1);
    vector<int> suf(s+1);
    
    pre[0]=0;
    suf[s]=0;
        int y=0;
        int n=0;
        int i=0;
    //prefix
    for(i=1;i<=s;i++){
        if(customers[i-1]=='N'){
            n++;
            pre[i]=n;
        } 
     }
     pre[i-1]=n;

    //suffix
    for(int i=s-1;i>=0;i--){
        if(customers[i]=='Y'){
            y++;
            suf[i]=y;
        }
        else suf[i]=y;
    }
     
        //pre[i]+suf[i];
        for(int i=0;i<s+1;i++){
            pre[i]=pre[i]+suf[i];
        }

        for(int i=0;i<s+1;i++){
            if(pre[i]<INT_MAX) minp=pre[i];
        }

        //minp;
        for(int i=0;i<s+1;i++){
            if(pre[i]==0) return i;
          if(pre[i]==minp)  { return i; }
        }

    return n; 
}

int main() {
    string str = "YYNY";  //  YNYY output should be 4;
   cout<< bestClosingTime(str); 
    return 0;
}
