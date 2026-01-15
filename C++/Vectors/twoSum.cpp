#include <iostream>
#include <vector>

    using namespace std;

    int main (){

        // int arr[5]={1,2,3,4,5};


        // for(int i=0;i<5;i++){
        //    for(int j=i+1;j<4;j++){

        //     if(arr[i]+arr[j]==3) //printf("%d %d\n",arr[i],arr[j]);
        //                 cout<<arr[i]<<" "<<arr[j]<<"\n";
        //    }
        // }

        int x,s,e;

        cout<<"Enter array size:";
        cin>>s;

        vector<int>v;

        for(int i=0;i<s;i++){
            cout<<"Enter element "<<i<<":";
            cin>>e;
            v.push_back(e);
        }

        cout<<"Enter target:";
        cin>>x;

        for(int i=0;i<5;i++){
           for(int j=i+1;j<4;j++){

            if(v.at(i)+v.at(j)==x) printf("%d %d\n",v.at(i),v.at(j));

           }
        }


    }