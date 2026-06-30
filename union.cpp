#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n1, n2, element;

    cout << "Enter size of first array: ";
    cin >> n1;

    for(int i = 0; i < n1; i++)
    {
        cin >> element;
        s.insert(element);
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    for(int i = 0; i < n2; i++)
    {
        cin >> element;
        s.insert(element);
    }

    cout << "Union of arrays: ";

    for(auto x : s)
    {
        cout << x << " ";
    }

    return 0;
}