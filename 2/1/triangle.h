#ifndef MIREA_PRACTIC_YANG_BRAVO_TRIANGLE_H
#define MIREA_PRACTIC_YANG_BRAVO_TRIANGLE_H


class triangle {
private:
    double first_side;
    double second_side;
    double third_side;

public:
    triangle();

    triangle(double a, double b, double c);

    bool isTriangle() const;

    double *show() const;

    double getPerimetr() const;

    double getSquare() const;

};


#endif //MIREA_PRACTIC_YANG_BRAVO_TRIANGLE_H
