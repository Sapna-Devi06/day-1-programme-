#include <iostream>
#include <map>
using namespace std;

int main() {
    string s="aabbcdde";

    map<char,int> freq;

    for(char ch : s) {
        freq[ch]++;
    }

    for(char ch : s) {
        if(freq[ch]==1) {
            cout<<"First non-repeating character: "<<ch;
            break;
        }
    }

    return 0;
}