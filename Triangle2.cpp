#include "Triangle2.h"

Triangle2::Triangle2(int x, int y, int b, int h) : Shape2(x, y), base(b), height(h) {
    cout << "Triangle2 생성" << endl;
}

void Triangle2::show() const {
    cout << "좌표 (" << getX() << "," << getY() << ")에 밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}

Triangle2::~Triangle2() {
    cout << "Triangle2 소멸" << endl;
}
