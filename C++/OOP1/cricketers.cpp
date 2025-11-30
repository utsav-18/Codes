#include <iostream>
#include <string>
    using namespace std;

class cricketer {
public:
    char name[10];
    int age;
    int noOftestmatches;
    int avScore;
    string bat[2];
};

int main() {
    cricketer arr[2];

    for(int i = 0; i < 2; i++) {
        cout<<"Entre the details of Player "<<i+1<<" :-"<<endl;
        cout << "Enter name: ";
        cin >> arr[i].name;
        cout << "Enter age: ";
        cin >> arr[i].age;
        cout << "Enter averageScore: ";
        cin >> arr[i].avScore;
        for(int i=0;i<1;i++){
            cout<<"Enter Bat "<<i<<" :";
            cin>>arr[i].bat[i];
        }
    }

        for(int i = 0; i < 2; i++) {
            cout<<"Player "<<i+1<<" :-"<<endl;
        cout << "Name: "<<arr[i].name<<"\n";
        cout << "Age: "<<arr[i].age<<"\n";
        cout << "AverageScore: "<<arr[i].avScore<<"\n";
        for(int i=0;i<1;i++){
            cout<<" Bat "<<i+1<<" :"<<arr[i].bat[i]<<"\n";
        }
    }

    return 0;
}


