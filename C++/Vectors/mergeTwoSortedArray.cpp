#include <iostream>
#include <vector>
    using namespace std;

vector<int>merge(vector<int>& v1 ,vector<int>& v2){

    int n=v1.size();
    int m=v2.size();

    vector<int> res(m+n);
    int i=0; //v1
    int j=0; //v2
    int k=0; //res

    while(i<n && j<m){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
            k++;
        }
        else {
            res[k]=v2[j];
            j++;
            k++;
        }
        //for remaining elements;

        if(i==n){  //at this point all v1 elements are filled ;
            while(j<m){
                res[k]=v2[j];
                k++;
                j++;

            }
        }
        if(j==m){ //at this point all v2 elements are filled;
            while(i<n){
                res[k]=v1[i];
                k++;
                i++;                
            }
        }
    }

        return res;

}

    int main(){

        vector<int>arr1;
        arr1.push_back(1);
        arr1.push_back(4);
        arr1.push_back(5);
        arr1.push_back(8);

        vector<int>arr2;
        arr1.push_back(2);
        arr1.push_back(3);
        arr1.push_back(6);
        arr1.push_back(7);
        arr1.push_back(10);
        arr1.push_back(12);

        // cout<<"Array 1: ";
        // for(int i=0;i<4;i++){
        //     cout<<arr1[i]<<" ";
        // }cout<<"\n"; cout<<"Array 2: ";
        // for(int i=0;i<6;i++){
        //     cout<<arr2[i]<<" ";
        // }

    vector<int> v = merge(arr1,arr2);

        cout<<"\n"; cout<<"Merged sorted Array: ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }


    }

    //not working ;
    

