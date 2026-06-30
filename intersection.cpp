#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1, s2;
    int n1, n2, element;

    cout << "Enter size of first array: ";
    cin >> n1;

    for(int i = 0; i < n1; i++)
    {
        cin >> element;
        s1.insert(element);
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    for(int i = 0; i < n2; i++)
    {
        cin >> element;
        s2.insert(element);
    }

    cout << "Intersection of arrays: ";

    for(auto x : s1)
    {
        if(s2.find(x) != s2.end())
        {
            cout << x << " ";
        }
    }

    return 0;
}