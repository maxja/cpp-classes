#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <cmath>

using namespace std;

struct complex_num {
private:
    double re, im;
public:
    complex_num(double a_re, double a_im) {
        re = a_re;
        im = a_im;
    }

    double get_re() { return re; }

    double get_im() { return im; }

    double modulo() { return sqrt(re * re + im * im); }

    double argument() { return atan2(im, re); }
};

int main() {
    double mod;
    mod = complex_num(2.7, 3.8).modulo();

    std::cout << mod << std::endl;

    return 0;
}