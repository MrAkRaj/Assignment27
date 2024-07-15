#include <iostream>
using namespace std;

class Integer {
private:
    int x;

public:
    Integer(int x = 0) : x(x) {}

    operator int() {
        return x;
    }

    void showData() {
        cout << "Integer: " << x << endl;
    }
};

int main() {
    Integer i(5);
    int a = i;
    cout << "a = " << a << endl; // Should print 5
    return 0;
}
