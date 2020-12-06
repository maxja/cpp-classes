#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <cmath>

using namespace std;

struct complex_num {
private:
    double mod, arg;
public:
    complex_num(double re, double im) {
        mod = sqrt(re * re + im * im);
        arg = atan2(im, re);
    }

    double get_re() { return mod * cos(arg); }

    double get_im() { return mod * sin(arg); }

    double modulo() { return mod; }

    double argument() { return arg; }
};

int main() {
    double mod;
    mod = complex_num(2.7, 3.8).modulo();

    std::cout << mod << std::endl;

    return 0;
}