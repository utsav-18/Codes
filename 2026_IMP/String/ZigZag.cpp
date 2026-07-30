#include <iostream>
#include <vector>
using namespace std;

    // string convert(string s, int numRows) {
    //     int size = s.length();
    //     int r = numRows;
    //     int c = r*2-1;

    //     string ans = "";

    //     vector<vector<char>>v(r,vector<char>(c,'*'));

    //     int idx = 0;

    //     for(int i=0;i<r;i++){
    //         if(size==0){
    //             break;
    //         }
    //         for(int j=0;j<c;j++){
    //             if(j==0 || j==r-1 || j==c-1 || i+j==r-1 || i+j==c-1){
    //                 v[i][j]=s[idx++];
    //                 size--;
    //             }
    //         }
    //     }

    //     for(int i = 0;i<r;i++){
    //         for(int j=0;j<c;j++){
    //             if(v[i][j]!='*'){
    //                 ans+=(v[i][j]);
    //             }
    //         }
    //     }

    // return ans;

    // }


    string convert(string s, int numRows) {
        vector<string> rows(numRows);
        int row = 0;
        int step = 1;
        for(char c:s){
            rows[row]+=c;
            row+=step;
            if(row == numRows-1 || row==0){
                step=-step;
            }
        }
        string ans = "";
        for(string s:rows){
            ans+=s;
        }
        return ans;
    }


    int main(){
        cout<<convert("PAYPALISHIRING",3);
    }