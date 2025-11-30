#include <iostream>
    using namespace std;
        int main () {

            int x;
            cout<<"Enter size :";cin>>x;

    int arr[x];
    cout<<"Enter elements: "<<endl;

    for(int i=0;i<x;i++){

        cout<<"a["<<i<<"]"<<"=> ";
        cin>>arr[i];

    }

    cout<<"Formed array: ";

            for(int i=0;i<x;i++){
                cout<<arr[i]<<" ";
            }


    cout<<"\nReverced array: ";

            int rra[x];

            for(int i=0;i<x;i++){

                rra[i]=arr[(x-1)-i];

            }

            for(int i=0;i<x;i++){
                cout<<rra[i]<<" ";
            }

        }