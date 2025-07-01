#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    float powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPower(float p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    float getPower()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
public:
    void display()
    {
        cout << "--- Laptop Details ---" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " W" << endl;
    }
};

class Smartphone : public Device
{
public:
    void display()
    {
        cout << "--- Smartphone Details ---" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " W" << endl;
    }
};

int main()
{
    Laptop l1;
    Smartphone s1;

    l1.setBrand("Dell");
    l1.setPower(65.0);

    s1.setBrand("Samsung");
    s1.setPower(15.0);

    l1.display();
    cout << endl;
    s1.display();

    return 0;
}
