#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void operator()(int a, int b, int c) {
        feet = a + c + 5;
        inches = a + b + 15;
    }

    void showData() {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }
};

int main() {
    Distance d;
    d(1, 2, 3);
    d.showData(); // Should print feet = 9, inches = 18
    return 0;
}
