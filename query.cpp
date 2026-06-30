#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[]={1,2,2,3,1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    map<int,int> freq;

    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    int q;
    cin>>q;

    while(q--) {
        int x;
        cin>>x;
        cout<<freq[x]<<endl;
    }

    return 0;
}