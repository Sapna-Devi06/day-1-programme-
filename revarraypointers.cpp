#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *start, *end, temp;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    start = arr;
    end = arr + 4;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}