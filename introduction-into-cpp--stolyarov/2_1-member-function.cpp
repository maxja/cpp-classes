#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <cmath>

using namespace std;

struct complex_num {
private:
    double re, im, mod, arg;
public:
    complex_num(double a_re, double a_im) {
        re = a_re;
        im = a_im;
        mod = sqrt(re * re + im * im);
        arg = atan2(im, re);
    }

    double get_re() { return re; }

    double get_im() { return im; }

    double modulo() { return mod; }

    double argument() { return arg; }
};

int main() {
    double mod;
    mod = complex_num(2.7, 3.8).modulo();

    std::cout << mod << std::endl;

    return 0;
}