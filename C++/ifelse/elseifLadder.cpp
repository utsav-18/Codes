#include <iostream>
using namespace std;
int main () {

    int m;
    cout<<"Enter Marks:";
    cin>>m;

        // if(m<=100 && m>=90) cout<<"Excellent";
        // if(m<=90 && m>=81)  cout<<"Very good";
        // if(m<=80 && m>=71)  cout<<"Good";
        // if(m<=70 && m>=61)  cout<<"Can do better";
        // if(m<=60 && m>=51)  cout<<"Average";
        // if(m<=50 && m>=40)  cout<<"Below Average";
        // if(m<40 && m>=0)    cout<<"Fail";

    // if(m>=91) {
    //     cout<<"excellent";
    // }
    // else{
    //         if(m>=81){
    //             cout<<"Very Good";
    //         }
    //         else {
    //             if(m>=71){
    //                 cout<<"Good";
    //             }
    //             else {
    //                 if(m>=61){
    //                     cout<<"Can do better";
    //                 }
    //                 else {
    //                     if(m>=51){
    //                         cout<<"Average";
    //                     }
    //                     else {
    //                         if(m>=41){
    //                             cout<<"Below Average";
    //                         }
    //                         else {
    //                             cout<<"Fail";
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    
    if(m>=91){
        cout<<"Excellent";
    }
        else if(m>=81){
            cout<<"Very Good";
             }
        else if(m>=71){
            cout<<"Good";
        }
        else if(m>=61){
            cout<<"Can do beeter";
        }
        else if(m>=51){
            cout<<"Average";
        }
        else if(m>=41){
            cout<<"Below Average";
        }
        else {
            cout<<"Fail";
        }
    
    
    return 0;
    
    }