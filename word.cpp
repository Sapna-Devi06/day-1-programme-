#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string s="apple mango apple banana mango";

    map<string,int> freq;

    string word;
    stringstream ss(s);

    while(ss>>word) {
        freq[word]++;
    }

    for(auto x : freq) {
        cout<<x.first<<" -> "<<x.second<<endl;
    }

    return 0;
}