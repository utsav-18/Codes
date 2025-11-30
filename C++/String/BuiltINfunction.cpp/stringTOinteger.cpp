#include <iostream>
#include <string>

using namespace std;
int main() {

string s1="12345";
int x = stoi(s1);
cout<<x<<endl<<x+1<<endl;

string s2="12345678910111213";
int y = stoll(s2);
cout<<y<<endl<<y+1;

}