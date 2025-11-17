#ifndef CIRCLE2_H
#define CIRCLE2_H

#include "Shape2.h"

class Circle2 : public Shape2 {
private:
    int radius;
public:
    Circle2(int x, int y, int r);
    void show() const override;
    ~Circle2();
};

#endif
