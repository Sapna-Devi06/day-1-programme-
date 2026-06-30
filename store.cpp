#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, element;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    cout << "Elements are: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}