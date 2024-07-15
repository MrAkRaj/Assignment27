#include <iostream>
using namespace std;

class Integer {
private:
    int x;

public:
    Integer(int x = 0) : x(x) {}

    bool operator!() {
        return x == 0;
    }

    void showData() {
        cout << "Integer: " << x << endl;
    }
};

int main() {
    Integer i1(5), i2(0);
    cout << !i1 << endl; // Should print 0
    cout << !i2 << endl; // Should print 1
    return 0;
}
