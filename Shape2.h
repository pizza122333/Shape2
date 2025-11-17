#ifndef SHAPE2_H
#define SHAPE2_H

#include <iostream>
using namespace std;

class Shape2 {
private:
    int x, y; // 위치 좌표
public:
    Shape2(int x = 0, int y = 0); // 기본 생성자
    void setPosition(int x, int y);
    int getX() const;
    int getY() const;
    virtual void show() const = 0; // 순수 가상 함수
    virtual ~Shape2(); // 가상 소멸자
};

#endif
