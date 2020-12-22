#include <cmath>
#include <iostream>

class Complex {
    double re, im;
public:
    Complex(double a_re, double a_im) { re = a_re; im = a_im; }
    Complex(double a) { re = a; im = 0;  }
    Complex() { re = 0; im = 0; }
    ~Complex() {}

    double modulo() { return sqrt(re*re + im*im); }
    double argument() { return atan2(im, re); }
    double get_re() { return re; }
    double get_im() { return im; }
    
    Complex operator+(Complex op2) { 
        Complex res(re + op2.re, im + op2.im); 
        return res; 
    }
    Complex operator-(Complex op2) { 
        Complex res(re - op2.re, im - op2.im); 
        return res;
    }
    Complex operator*(Complex op2) { 
        Complex res(re * op2.re - im * op2.im, re * op2.im + im * op2.re); 
        return res;
    }
    Complex operator/(Complex op2) {
        double dvs = op2.re*op2.re+op2.im*op2.im;
        Complex res((re*op2.re + im*op2.im)/dvs,
                    (im*op2.re - re*op2.im)/dvs);
        return res;
    }
};

void f(Complex a) {
    std::cout << a.get_re() << "\n";
}

int main() {
    Complex a { 1.0, 2.0 };
    Complex b(1.3);
    Complex c;
    Complex d = a + b + c;

    f(2.7);

    std::cout << a.get_re() << "\n";
    std::cout << b.get_re() << "\n";
    std::cout << c.get_re() << "\n";
    std::cout << d.modulo() << "\n";

    return 0;
}