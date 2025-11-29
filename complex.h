#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <ostream>
#include <istream>

using namespace std;

class Complex {
    private:
        int real;
        int imag;
    public:
        Complex(int real , int img);
        Complex();
        void setReal(int);
        void setImag(int);
        int getReal();
        int getImag();
        
        Complex addComplex(const Complex& c);
        Complex addInt(int x);
        void displayComplex();
        
        friend Complex operator+(const Complex& c1, const Complex& c2);
        friend Complex operator-(const Complex& c1 , const Complex& c2);
        friend Complex operator+(const Complex& c, int x);
        friend Complex operator-(const Complex& c , int x);
        friend Complex& operator++(Complex& c); // Prefix increment
        friend Complex operator++(Complex& c, int); // Postfix increment
        friend Complex& operator--(Complex& c); // Prefix decrement
        friend Complex operator--(Complex& c, int); // Postfix decrement
        
        friend ostream& operator<<(ostream& out, const Complex& c);
        friend istream& operator>>(istream& in, Complex& c);

        friend bool operator==(const Complex& c1, const Complex& c2);
        friend bool operator!=(const Complex& c1, const Complex& c2);
};







#endif // COMPLEX_H