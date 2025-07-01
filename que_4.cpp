#include <iostream>
using namespace std;

// Base class
class Device {
protected:
    float price;

public:
    void setPrice(float p) {
        price = p;
    }

    float getPrice() {
        return price;
    }

    // Virtual function for polymorphism
    virtual void calculateDiscount() {
        cout << "Device Discount: No discount defined." << endl;
    }
};

// Derived class - Laptop
class Laptop : public Device {
public:
    void calculateDiscount() override {
        float discount = price * 0.10;  // 10% discount
        cout << "Laptop Price: " << price << ", Discount: " << discount << endl;
    }
};

// Derived class - Smartphone
class Smartphone : public Device {
public:
    void calculateDiscount() override {
        float discount = price * 0.05;  // 5% discount
        cout << "Smartphone Price: " << price << ", Discount: " << discount << endl;
    }
};

int main() {
    // Array of base class pointers
    Device* devices[2];

    // Create objects
    Laptop l;
    Smartphone s;

    // Set prices
    l.setPrice(50000);
    s.setPrice(30000);

    // Store in base class pointer array
    devices[0] = &l;
    devices[1] = &s;

    // Polymorphism: call overridden function
    cout << "--- Discounts ---" << endl;
    for (int i = 0; i < 2; i++) {
        devices[i]->calculateDiscount();
    }

    return 0;
}
