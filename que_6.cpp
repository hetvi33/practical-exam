#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;

public:
    Employee(string n, int a) {
        name = n;
        age = a;
    }

    int getAge() {
        return age;
    }

    int operator-(Employee e) {
        int diff = age - e.age;
        if (diff < 0)
            diff = -diff; 
        return diff;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Employee e1("Hetvi", 25);
    Employee e2("Aryan", 20);

    e1.show();
    e2.show();

    int ageDiff = e1 - e2;

    cout << "Age difference: " << ageDiff << " years" << endl;

    return 0;
}
