#include "Shape2.h"

Shape2::Shape2(int x, int y) : x(x), y(y) {
    cout << "Shape2 생성" << endl;
}

void Shape2::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}

int Shape2::getX() const { return x; }
int Shape2::getY() const { return y; }

Shape2::~Shape2() {
    cout << "Shape2 소멸" << endl;
}
