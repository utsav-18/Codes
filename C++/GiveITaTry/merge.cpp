#include <iostream>
#include <vector>
    using namespace std;

   void merge(vector<int>& a,vector<int>& b,vector<int>& res) {
        int i=0,j=0,k=0;
        while(i<a.size() && j<b.size()) {
                if(a[i]<b[j]) res[k++]=a[i++];
                else res[k++]=b[j++];
        
            if(i==a.size()){
                while(j<b.size()){
                    res[k++]=a[i++];
                }
            }
            if(j==b.size()){
                while(i<a.size()){
                    res[k++]=b[j++];
                }
            }
        }
   }
            void mergeSort(vector<int> &res){

                int n = res.size();
                if(n==1) return;
                int n1=n/2,n2=n-n/2;
                    vector<int>a(n1);
                    vector<int>b(n2);
                        for(int i=0;i<n1;i++){
                            res[i]=a[i];
                        }
                        for(int i=0;i<n1;i++){
                            res[i]=b[i+n1];
                        }
                    mergeSort(a);
                    mergeSort(b);
                    merge(a,b,res);

            }


        int main(){
            int arr[]={1,5,4,2,3,6,7,8};
            int s = sizeof(arr)/sizeof(arr[0]);
                vector<int> v(arr,arr+s);
                mergeSort(v);

            for(int i=0;i<v.size();i++){
               cout<<v[i]<<" ";  
            }
        }