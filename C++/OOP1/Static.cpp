#include <iostream>
using namespace std;

void print_1()
{
   int b=10;
   cout<<b<<endl;
   b++; 
} 
void print_2(){
    static int b = 10;
    cout<<b<<endl;
    b++;
}

int main(){
    cout<<"Bfore using static keywoed: - \n";
    print_1();
    print_1();
    print_1();
    cout<<"After using static keywoed: - \n";
    print_2();
    print_2();
    print_2();
}


