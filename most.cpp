#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[]={1,2,2,3,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    map<int,int> freq;

    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    int maxFreq=0, element;

    for(auto x : freq) {
        if(x.second > maxFreq) {
            maxFreq=x.second;
            element=x.first;
        }
    }

    cout<<"Most frequent element: "<<element;

    return 0;
}