#include <iostream>
using namespace std;

void findRepeatation(int a[], int size){
    bool printed[size];
    for (int i=0;i<size;i++){
        printed[i]=false;
    }

    for (int i = 0; i < size - 1; i++){
        int count = 1;
        if (printed[i]==true) continue;

        for (int j = i + 1; j < size; j++){
            if (a[i] == a[j]){
                count++;
                printed[j] = true; // mark duplicates so they don’t print again
            }
        }

        if (count > 1){
            cout << a[i] << " repeated!! " << count << " times\n";
        }
    }
}

int main(){
    int a[]={7,7,1,9,1,4,6,1,23,6,6,6,5};
    int size = sizeof(a)/sizeof(a[0]);
    findRepeatation(a,size);
}