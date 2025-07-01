#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Lion says: Roar!" << endl;
    }

    void move() override {
        cout << "Lion runs on land." << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() override {
        cout << "Fish says: Blub!" << endl;
    }

    void move() override {
        cout << "Fish swims in water." << endl;
    }
};

int main() {
    Animal* animals[2];

    Lion l;
    Fish f;

    animals[0] = &l;
    animals[1] = &f;

    cout << "--- Animal Sounds and Movements ---" << endl;
    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << "-----------------------------" << endl;
    }

    return 0;
}
