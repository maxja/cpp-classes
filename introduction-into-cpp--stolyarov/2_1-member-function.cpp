#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <cmath>

using namespace std;

// Simple structure that represents complex number
struct complex_num {
private:
    double re, im;
public:
    complex_num(double a_re, double a_im) {
        re = a_re;
        im = a_im;
    }

    // Member-function or method
    double modulo() const { return sqrt(re * re + im * im); }
};

int main() {
    // Setup instance via constructor
    complex_num n(2.7, 3.8);

    // Call member-function
    double mod;
    mod = n.modulo();

    std::cout << mod << std::endl;

    return 0;
}