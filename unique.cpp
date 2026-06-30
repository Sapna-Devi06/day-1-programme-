#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n, element;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> element;
        s.insert(element);
    }

    cout << "Unique elements are: ";

    for(auto x : s)
    {
        cout << x << " ";
    }

    return 0;
}