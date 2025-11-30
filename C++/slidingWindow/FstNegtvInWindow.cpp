#include <iostream>
#include <vector> 
    using namespace std;

        // O(n*k)
        // int main(){
        //     int arr[]={2,-3,4,4,-7,-1,4,-2,6};
        //     int n = sizeof(arr)/sizeof(arr[0]);
        //     int k=3;
        //     vector<int>v;
        //     for(int i=0;i<=n-k;i++){          //n-k;
        //         for(int j=i;j<i+k;j++){      //i+k;
        //             if(arr[j]<0) {
        //                 v.push_back(arr[j]); 
        //                 break;
        //             }
        //         }
        //     }
        //          for(int i=0;i<v.size();i++){
        //             cout<<v[i]<<" ";
        //          }
        // }

            int main(){
                //int arr[]={1,-2,3,-4,5,-6,7,-8,-9};
                int arr[]={1,-2,3,-4,5,-6,7,-8,-9};
                int n = sizeof(arr)/sizeof(arr[0]);
                int k = 4;
                int p = -1;
                int ans[n-k+1];

                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
    
                    for(int i=0;i<k;i++){ //for finding the first negative element; 
                        if(arr[i]<0){
                            p=i;
                            break;
                        }
                    }
                        if(p==-1) ans[0] = 1;
                        else ans[0] = arr[p];

                        //sliding window;

                int i = 1;
                int j = k;

                while(j<n){
                    if(p>=i) ans[i] = arr[p];
                    else {
                         p = -1;
                         for(int x = i;x<=j;x++){
                            if(arr[x]<0){
                                p = x;
                                break;
                            }
                         }
                         if(p!=-1) ans[i]=arr[p];
                         else ans[i] = 1;
                    }
                    i++;
                    j++;
                }

                    cout<<"\n";
                for(int i=0;i<n-k+1;i++){
                    cout<<ans[i]<<" ";
                }
            }

        