#include <iostream>
using namespace std;
int main () {

    bool p = false;
    bool q = false;
    bool r = true;

    // int p=1,q=2,r=2;  for this out put will be 0 ;


    cout<< (p == q == r) ;   // hint if p==q then output = 1

        // because p == q the value became true means = 1 ;
        // and now {(p==q) = 1} hence 1=true so the output will be = 1;

    return 0;

}