#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int x, y;

    cout<<"Enter first number: ";
    cin>>x;

    cout<<"Enter second number: ";
    cin>>y;

    cout<<"GCD = "<<gcd(x,y);

    return 0;
}