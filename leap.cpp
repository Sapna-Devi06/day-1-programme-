#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year: ";
    cin>>n;
    if(n%4==0){
        cout<<"The year is a leap year";
    }
    else{
        cout<<"The year is not a leap year";
    }
    return 0;
}