#include <iostream>
using namespace std;

class Array {
private:
    int arr[5];

public:
    Array() {
        for (int i = 0; i < 5; i++) {
            arr[i] = i + 1;
        }
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Index out of bound, returning first element" << endl;
            return arr[0];
        }
        return arr[index];
    }
};

int main() {
    Array a;
    cout << a[2] << endl; // Should print 3
    cout << a[7] << endl; // Should print error message and 1
    return 0;
}
