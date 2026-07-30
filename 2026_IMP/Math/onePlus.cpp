#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }

        digits.insert(digits.begin(),1);
        return digits;

    }

    // vector<int> plusOne(vector<int>& digits) {
    //     int size = digits.size()-1;
        
    //     int num=0;
    //     int i=0;

    //     while(size>=0){
    //         num += pow(10,size) * digits[i];
    //         size--;
    //         i++;
    //     }

    //     num++;
    //     size = digits.size();

    //     vector<int>ans(size);

    //     i=size-1;

    //     while(num>0){
    //         int ld = num%10;
    //         ans[i--] = ld;
    //         num=num/10;
    //     }

    //     return ans;

    // }

int main(){
    vector<int>v={9};

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int>ans = plusOne(v);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}