#include<iostream>
#include<stack>

using namespace std;

int main() {
int arr[8]={3,1,2,5,4,6,2,3};
int ans[8];
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

//Brute force algo; O(n^2);
// for(int i=0;i<8;i++){
//     ans[i]=-1;
//     for(int j=i+1;j<8;j++){
//         if(arr[j]>arr[i]){
//             ans[i] = arr[j];
//             break;
//         }
//     }
// }
//     for(int i=0;i<8;i++){
//         cout<<ans[i]<<" ";
//     }

//stack algo 
    stack<int>st;
    ans[8-1] = -1;
    st.push(arr[8-1]);
    for(int i=8-2;i>=0;i--){

        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        if(st.size()==0) ans[i]=-1;
        else ans[i] = st.top();
        st.push(arr[i]);

    }

    for(int i=0;i<8;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;


}