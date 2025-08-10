#include<iostream>
using namespace std;

class shape {
public:
    double n1, n2;

    shape(double x1, double y1) {
        n1 = x1;
        n2 = y1;
    }

    virtual double area() {
        return 0;
    }
};

class tri : public shape {
public:
    tri(double x, double y) : shape(x, y) {}

    double area() override {
        return 0.5 * n1 * n2;
    }
};

int main() {
    tri ds(43, 42);
    cout << "Area of triangle: " << ds.area() << endl;
    return 0;
}
