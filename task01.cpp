#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}

    friend ostream& operator<<(ostream &out, const Complex &c);
    friend istream& operator>>(istream &in, Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator>>(istream &in, Complex &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    Complex c1;
    cout << "Enter complex number:\n";
    cin >> c1;
    cout << "You entered: " << c1 << endl;
    return 0;
}
