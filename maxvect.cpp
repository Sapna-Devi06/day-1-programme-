#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, element, max;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    max = v[0];

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}