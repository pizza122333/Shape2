#include "Rect2.h"

Rect2::Rect2(int x, int y, int w, int h) : Shape2(x, y), width(w), height(h) {
    cout << "Rect2 생성" << endl;
}

void Rect2::show() const {
    cout << "좌표 (" << getX() << "," << getY() << ")에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

Rect2::~Rect2() {
    cout << "Rect2 소멸" << endl;
}
