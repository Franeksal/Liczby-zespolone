#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    complex c1;
    c1.re = 2;
    c1.im = 3;
    print_complex(c1);

    complex c2;
    c2.re = -3.1;
    c2.im = -2.3;
    print_complex(c2);

    complex c3 = add_complex(c1, c2);
    print_complex(c3);

    complex c4 = subtract_complex(c1, c2);
    print_complex(c4);

    complex c5 = multiply_complex(c1, c2);
    print_complex(c5);

    complex c6 = divide_complex(c1, c2);
    print_complex(c6);

    return 0;
}
