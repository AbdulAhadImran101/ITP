#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

void readComplex(Complex &c) {
    [cite_start]cout << "Real part: "; cin >> c.real; [cite: 58]
    [cite_start]cout << "Imaginary part: "; cin >> c.imag; [cite: 58]
}

void writeComplex(Complex c) {
    [cite_start]cout << c.real << "+" << c.imag << "i" << endl; [cite: 59]
}

Complex add(Complex c1, Complex c2) {
    Complex t;
    [cite_start]t.real = c1.real + c2.real; [cite: 60]
    [cite_start]t.imag = c1.imag + c2.imag; [cite: 60]
    return t;
}

Complex multiply(Complex c1, Complex c2) {
    Complex t;
    [cite_start]t.real = (c1.real * c2.real) - (c1.imag * c2.imag); [cite: 61]
    [cite_start]t.imag = (c1.real * c2.imag) + (c1.imag * c2.real); [cite: 61]
    return t;
}

int main() {
    Complex n1, n2, sum, prod;
    [cite_start]cout << "First:" << endl; readComplex(n1); [cite: 63]
    [cite_start]cout << "Second:" << endl; readComplex(n2); [cite: 65]

    [cite_start]sum = add(n1, n2); [cite: 68]
    [cite_start]prod = multiply(n1, n2); [cite: 70]

    [cite_start]cout << "Sum: "; writeComplex(sum); [cite: 68]
    [cite_start]cout << "Product: "; writeComplex(prod); [cite: 70]

    return 0;
}