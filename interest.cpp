#include<iostream>
using namespace std;
int main(){
   int p,r,t;
   cout<<"enter the principal: ";
   cin>>p;
   cout<<"enter the rate";
   cin>>r;
   cout<<"enter the time" ;
   cin>>t;
   int si=(p*r*t)/100;
   cout<<"the si is "<<si;
   return 0;
}