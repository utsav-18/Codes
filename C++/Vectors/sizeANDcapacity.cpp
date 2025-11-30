#include <iostream>
#include <vector>

    using namespace std;
        int main(){

            vector<int>v;
cout<<"Size: \n";

            v.push_back(1);
             cout<<v.size()<<endl;

            v.push_back(2); 
             cout<<v.size()<<endl;

            v.push_back(3);
             cout<<v.size()<<endl;

            v.push_back(4);
             cout<<v.size()<<endl;

            v.push_back(5);
             cout<<v.size()<<endl;


cout<<"\nCapacity: \n";

            vector<int>v2;

            v2.push_back(6);
             cout<<v2.capacity()<<endl;

            v2.push_back(7); 
             cout<<v2.capacity()<<endl;

            v2.push_back(8);
             cout<<v2.capacity()<<endl;  // when size is full then the capasity became double;

            v2.push_back(9);
             cout<<v2.capacity()<<endl;

            v2.push_back(10);
             cout<<v2.capacity()<<endl;  // when size is full then the capasity became double;

//size is increasing in steps;


        }