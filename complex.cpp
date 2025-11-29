#include "complex.h"

// Constructor implementations
Complex::Complex(int real , int img){
    this->real = real;
    this->imag = img;
}

Complex::Complex(){
    this->real = 0;
    this->imag = 0;
}

// Setter and Getter methods
void Complex::setReal(int real){
    this->real = real;
}

void Complex::setImag(int imag){
    this->imag = imag;
}

int Complex::getReal(){
    return this->real;
}

int Complex::getImag(){
    return this->imag;
}

// Method to add two complex numbers

Complex Complex::addComplex(const Complex& c){
    return Complex(this->real + c.real, this->imag + c.imag);
}

Complex Complex::addInt(int x){
    return Complex(this->real + x, this->imag);
}

void Complex::displayComplex(){
    if(imag >= 0)
        cout << real << " + " << imag << "i" << endl;
    else
        cout << real << " - " << -imag << "i" << endl;
}

// Operator Overloading
Complex operator+(const Complex& c1, const Complex& c2){
    return Complex(c1.real + c2.real , c2.imag + c1.imag);
}

Complex operator-(const Complex& c1, const Complex& c2){
    return Complex(c1.real - c2.real , c2.imag - c1.imag);
}

Complex operator+(const Complex& c, int x){
    return Complex(c.real + x , c.imag);
}

Complex operator-(const Complex& c , int x){
    return Complex(c.real - x , c.imag);
}

Complex& operator++(Complex& c){ // Prefix increment
    c.real++;
    return c;
}

Complex operator++(Complex& c, int){ // Postfix increment
    Complex temp = c;
    c.real++;
    return temp;
}

Complex& operator--(Complex& c){ // Prefix decrement
    c.real--;
    return c;
}

Complex operator--(Complex& c, int){ // Postfix decrement
    Complex temp = c;
    c.real--;
    return temp;
}

ostream& operator<<(ostream& out, const Complex& c){
    if(c.imag >= 0)
        out << c.real << " + " << c.imag << "i";
    else
        out << c.real << " - " << -c.imag << "i";
    return out;
}

istream& operator>>(istream& in , Complex& c){
    int real=0 , imag=0;
    in >> real >> imag;
    c.setReal(real);
    c.setImag(imag);
    return in;
}

bool operator ==(const Complex& c1 , const Complex& c2){
    
    if(c1.real != c2.real){
        return false;
    }
    if(c1.imag != c2.imag){
        return false;
    }
    return true;
}

bool operator !=(const Complex& c1 , const Complex& c2){
    return !(c1==c2);   
}