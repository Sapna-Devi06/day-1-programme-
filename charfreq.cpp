#include <iostream>
#include <map>
using namespace std;

int main() {
    string s="banana";

    map<char,int> freq;

    for(char ch : s) {
        freq[ch]++;
    }

    for(auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}