#include <iostream>
#include <cstdlib>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex subtractComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

Complex multiplyComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

Complex divideComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return result;
}

int main() {
    Complex c1 = { 2.5, 1.5 };
    Complex c2 = { 1.0, 2.0 };

    Complex sum = addComplex(c1, c2);
    Complex difference = subtractComplex(c1, c2);
    Complex product = multiplyComplex(c1, c2);
    Complex quotient = divideComplex(c1, c2);

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "Difference: " << difference.real << " + " << difference.imag << "i" << endl;
    cout << "Product: " << product.real << " + " << product.imag << "i" << endl;
    cout << "Quotient: " << quotient.real << " + " << quotient.imag << "i" << endl;

    system("pause>nul");
    return 0;
}
