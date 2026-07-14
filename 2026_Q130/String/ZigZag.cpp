#include <iostream>
#include <vector>
using namespace std;

    string convert(string s, int numRows) {
        int size = s.length();
        int r = numRows;
        int c = r*2-1;

        string ans = "";

        vector<vector<char>>v(r,vector<char>(c,'*'));

        int idx = 0;

        for(int i=0;i<r;i++){
            if(size==0){
                break;
            }
            for(int j=0;j<c;j++){
                if(j==0 || j==r-1 || j==c-1 || i+j==r-1 || i+j==c-1){
                    v[i][j]=s[idx++];
                    size--;
                }
            }
        }

        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                if(v[i][j]!='*'){
                    ans+=(v[i][j]);
                }
            }
        }

    return ans;

    }

    int main(){
        cout<<convert("PAYPALISHIRING",3);
    }