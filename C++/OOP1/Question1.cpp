#include<iostream>
using namespace std;

    class book{
      public:
      string name;
      int price;
      int noOfpages;

        
        int countBooks(int p){
            if(price<=p){
                return 1;
            }

                else {
                    return 0;
                }
        }

        bool isBookPresent(string title){
            if(name == title){
                return true;
            }
                else {
                     return false;
                }
        }

    };

        int main() {

            book book1;
            book1.name = "Python";
            book1.price = 499;
            book1.noOfpages = 1000;

                cout<<book1.countBooks(498)<<"\n";
                cout<<book1.isBookPresent("Python")<<"\n";

        }