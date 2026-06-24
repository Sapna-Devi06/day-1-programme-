#include<iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100) {
        cout << "Grade: A";
    }
    else if(marks >= 80) {
        cout << "Grade: B";
    }
    else if(marks >= 70) {
        cout << "Grade: C";
    }
    else if(marks >= 60) {
        cout << "Grade: D";
    }
    else if(marks >= 0) {
        cout << "Grade: F";
    }
    else {
        cout << "Invalid marks";
    }

    return 0;
}