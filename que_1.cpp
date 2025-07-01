#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    // Function to show student details
    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    int n;
    cout << "How many students? ";
    cin >> n;

    Student *s[n];

    for (int i = 0; i < n; i++)
    {
        string nm;
        int rn;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> nm;
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> rn;

        s[i] = new Student(nm, rn);
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++)
    {
        s[i]->showDetails();
        cout << "-----------------------\n";
    }

    return 0;
}
