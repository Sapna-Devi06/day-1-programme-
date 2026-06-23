#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"entr the  number: ";
    cin>>x;

    int y;
    cout<<"enert the nuber : ";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swapping : ";
    cout<<"x is : "<<x<<endl;
    cout<<"Y  is : "<<y<<endl;
    return 0;
}