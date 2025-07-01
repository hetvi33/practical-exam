#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    float speed;

public:
    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    void setSpeed(float s) {
        speed = s;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    float getSpeed() {
        return speed;
    }
};

int main() {
    Car c1;

    c1.setModel("Toyota");
    c1.setYear(2020);
    c1.setSpeed(120.5);

    cout << "Car Details:" << endl;
    cout << "Model: " << c1.getModel() << endl;
    cout << "Year: " << c1.getYear() << endl;
    cout << "Speed: " << c1.getSpeed() << " km/h" << endl;

    return 0;
}
