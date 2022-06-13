#include <iostream>
#include "Shape.h"
int main()
{
    Circle circle(5);
    printParams(&circle);


    Rectangle rectangle(5, 2);
    printParams(&rectangle);

    Triangle triangle(5, 4, 8);
    printParams(&triangle);
}

