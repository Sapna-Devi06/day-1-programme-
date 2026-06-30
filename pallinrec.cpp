#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    // Base case
    if(start >= end)
        return true;

    // If characters do not match
    if(str[start] != str[end])
        return false;

    // Recursive call
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if(isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}