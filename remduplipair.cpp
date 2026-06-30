#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<pair<int,int>> s;
    int n, a, b;

    cout << "Enter number of pairs: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter pair values: ";
        cin >> a >> b;

        s.insert({a,b});
    }

    cout << "After removing duplicate pairs:\n";

    for(auto x : s)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}