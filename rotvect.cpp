#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, element, k;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    cout << "Enter rotation position: ";
    cin >> k;

    rotate(v.begin(), v.begin() + k, v.end());

    cout << "Rotated vector: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}