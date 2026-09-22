#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int hr(vector<int>& v) {
    int n = v.size();

    if (n == 0) return 0;
    if (n == 1) return v[0];

    int p1 = v[0];
    int p2 = max(v[0], v[1]);

    for (int i = 2; i < n; i++) {
        int p3 = max(p2, p1 + v[i]);
        p1 = p2;
        p2 = p3;
    }

    return p2;
}

int main(){
    vector <int> v;
    v = {2,7,9,3,1};
    cout<<hr(v);
}