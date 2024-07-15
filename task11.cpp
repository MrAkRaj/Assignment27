#include <iostream>
using namespace std;

class Marks {
private:
    int marks;

public:
    Marks(int m = 0) : marks(m) {}

    void display() {
        cout << "Marks: " << marks << endl;
    }

    Marks* operator->() {
        return this;
    }
};

int main() {
    Marks m(85);
    m->display(); // Should print 85
    return 0;
}
