#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <cmath>

using namespace std;

// Simple structure that represents complex number
struct complex_num {
    double re, im;

    // Member-function or method
    double modulo() const { return sqrt(re * re + im * im); }

    // ... via explicit obj pointer this
    double implicit_modulo() { return sqrt(this->re * this->re + this->im * this->im); }
};

// C-style function
double modulo_c(complex_num *c) {
    return sqrt(c->re * c->re + c->im * c->im);
}

int main() {
    complex_num n{2.7, 3.8};

    // Call member-function
    double mod;
    mod = n.modulo();

    // Call member-function
    double mod_i;
    mod_i = n.implicit_modulo();

    // Invoke C-style function
    double mod_c;
    mod_c = modulo_c(&n);

    std::cout << mod << "\n" << mod_i << "\n" << mod_c << std::endl;

    return 0;
}