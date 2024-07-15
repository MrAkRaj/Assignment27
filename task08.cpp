#include <iostream>
using namespace std;

class Coordinate {
private:
    int x, y, z;

public:
    Coordinate(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}

    Coordinate operator,(Coordinate c) {
        return c;
    }

    void showData() {
        cout << "Coordinate: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Coordinate c1(1, 2, 3), c2(4, 5, 6), c3;
    c3 = (c1, c2);
    c3.showData(); // Should print c2's values
    return 0;
}
