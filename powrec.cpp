#include <iostream>
using namespace std;

int power(int base, int exp)
{
    // Base case
    if (exp == 0)
        return 1;

    // Recursive call
    return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << "Result = " << power(base, exp);

    return 0;
}