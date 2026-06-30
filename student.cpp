#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, string>> student;

    int n, roll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Roll No and Name: ";
        cin >> roll >> name;

        student.push_back(make_pair(roll, name));
    }

    cout << "\nStudent Records:\n";

    for(int i = 0; i < student.size(); i++)
    {
        cout << "Roll No: " << student[i].first
             << " Name: " << student[i].second << endl;
    }

    return 0;
}