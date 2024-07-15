#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student() : rollNo(0), name("") {}

    void setData(int roll, string name) {
        rollNo = roll;
        this->name = name;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }

    void* operator new(size_t size) {
        cout << "Overloading new operator with size: " << size << endl;
        void *p = ::operator new(size);
        return p;
    }

    void operator delete(void *p) {
        cout << "Overloading delete operator" << endl;
        free(p);
    }
};

int main() {
    Student *s = new Student();
    s->setData(101, "John Doe");
    s->display();
    delete s;
    return 0;
}
