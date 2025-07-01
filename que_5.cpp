#include <iostream>
using namespace std;

class MathOperations {
public:
    void divide(int a, int b) {
        try {
            if (b == 0) {
                throw "Division by zero is not allowed.";
            }
            if (a < 0 || b < 0) {
                throw "Negative numbers are not allowed.";
            }

            float result = (float)a / b;
            cout << "Result of division: " << result << endl;
        }
        catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }
    }
};

int main() {
    MathOperations m;

    m.divide(10, 2);

    m.divide(10, 0);

    m.divide(-10, 2);

    return 0;
}
