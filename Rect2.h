#ifndef RECT2_H
#define RECT2_H

#include "Shape2.h"

class Rect2 : public Shape2 {
private:
    int width, height;
public:
    Rect2(int x, int y, int w, int h);
    void show() const override;
    ~Rect2();
};

#endif
