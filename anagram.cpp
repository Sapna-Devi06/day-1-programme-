#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare strings
    if(str1 == str2)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}