#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    Complex& operator=(const Complex &c) {
        real = c.real;
        imag = c.imag;
        return *this;
    }

    void showData() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2;
    c2 = c1;
    c2.showData();
    return 0;
}
