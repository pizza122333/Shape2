#include "Circle2.h"
#include "Rect2.h"
#include "Triangle2.h"

int main() {
    Circle2 x(0,0,2);
    Rect2 y(1,1,5,10);
    Triangle2 z(2,2,5,10);

    x.show();
    y.show();
    z.show();

    return 0;
}
