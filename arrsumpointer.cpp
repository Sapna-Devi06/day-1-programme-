#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;
    int *ptr = arr;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Sum using pointer
    for(int i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}