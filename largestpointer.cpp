#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest = *ptr;

    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}