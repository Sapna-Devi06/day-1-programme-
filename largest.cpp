#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter the first number : ";
    cin>>x;
    cout<<"enter the second number: ";
    cin>>y;
    cout<<"enter the third number: ";
    cin>>z;
    if(x>=y && x>=z){
        cout<<"the largest number is : "<<x;
    }
    else if ( y>=z && y>=x){
        cout<<"the largest number is : "<<y;
    }
    else{
        cout<<"the largest number is : "<<z;
    }
    return 0;
}