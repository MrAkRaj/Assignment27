#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void setData(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }

    void showData() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c;
    c.setData(3, 4);
    c.showData();
    return 0;
}
