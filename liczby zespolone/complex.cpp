    #include <iostream>
#include "complex.h"

using namespace std;

void print_complex(complex c) {
    if (c.im >= 0)
        cout << c.re << "+" << c.im << "i" << endl;
    else
        cout << c.re << c.im << "i" << endl;
}

complex add_complex(complex a, complex b) {
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

complex subtract_complex(complex a, complex b) {
    complex c;
    c.re = a.re - b.re;
    c.im = a.im - b.im;
    return c;
}

complex multiply_complex(complex a, complex b) {
    complex c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + a.im * b.re;
    return c;
}

complex divide_complex(complex a, complex b) {
    complex c;
    double d = b.re * b.re + b.im * b.im;

    if (d == 0) {
        cout << "Dzielenie przez zero!" << endl;
        return {0, 0};
    }

    c.re = (a.re * b.re + a.im * b.im) / d;
    c.im = (a.im * b.re - a.re * b.im) / d;

    return c;
}
