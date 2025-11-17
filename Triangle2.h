#ifndef TRIANGLE2_H
#define TRIANGLE2_H

#include "Shape2.h"

class Triangle2 : public Shape2 {
private:
    int base, height;
public:
    Triangle2(int x, int y, int b, int h);
    void show() const override;
    ~Triangle2();
};

#endif
