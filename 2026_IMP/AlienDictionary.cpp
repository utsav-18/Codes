#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

    bool isAlienSorted(vector<string>& words, string order) {

        unordered_map<char, int> orderMap;

        for (int i = 0; i < order.length(); i++) {
            orderMap[order[i]] = i;
        }

        for (int i = 0; i < words.size() - 1; i++) {

            for (int j = 0; j < words[i].length(); j++) {

                if (j >= words[i + 1].length()) {
                    return false;
                }

                if (words[i][j] != words[i + 1][j]) {

                    int currLetter = orderMap[words[i][j]];
                    int nextLetter = orderMap[words[i + 1][j]];

                    if (nextLetter < currLetter) {
                        return false;
                    } else {
                        break;
                    }
                }
            }
        }

        return true;
    }


int main(){
    vector<string>words;
    words = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout<<isAlienSorted(words,order);

}