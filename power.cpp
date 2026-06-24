#include<iostream>
using namespace std;

int power(int a, int b)
{
    int result = 1;

    for(int i=1; i<=b; i++)
    {
        result = result * a;
    }

    return result;
}

int main()
{
    int base, exponent;

    cout<<"Enter base: ";
    cin>>base;

    cout<<"Enter exponent: ";
    cin>>exponent;

    cout<<"Answer = "<<power(base, exponent);

    return 0;
}