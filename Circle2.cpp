#include "Circle2.h"

Circle2::Circle2(int x, int y, int r) : Shape2(x, y), radius(r) {
    cout << "Circle2 생성" << endl;
}

void Circle2::show() const {
    cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 " << radius << "인 원" << endl;
}

Circle2::~Circle2() {
    cout << "Circle2 소멸" << endl;
}
