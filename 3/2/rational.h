#ifndef MIREA_PRACTIC_YANG_BRAVO_RATIONAL_H
#define MIREA_PRACTIC_YANG_BRAVO_RATIONAL_H


class rational {
public:
    rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
private:
    int a, b;
    void reduce();
};


#endif //MIREA_PRACTIC_YANG_BRAVO_RATIONAL_H
