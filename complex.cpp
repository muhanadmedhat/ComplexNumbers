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


Complex::Complex(const Complex& other) {
    this->real = other.real;
    this->imag = other.imag;
}

// Move constructor
Complex::Complex(Complex&& other) noexcept {
    this->real = other.real;
    this->imag = other.imag;
    other.real = 0;
    other.imag = 0;
}

// Copy assignment operator
Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        this->real = other.real;
        this->imag = other.imag;
    }
    return *this;
}

// Move assignment operator
Complex& Complex::operator=(Complex&& other) noexcept {
    if (this != &other) {
        this->real = other.real;
        this->imag = other.imag;
        other.real = 0;
        other.imag = 0;
    }
    return *this;
}

// Destructor
Complex::~Complex() {
    
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

// Arithmetic operators with integer (member functions)
Complex Complex::operator+(int x) const {
    return Complex(this->real + x, this->imag);
}

Complex Complex::operator-(int x) const {
    return Complex(this->real - x, this->imag);
}

// Increment and Decrement operators (member functions)
Complex& Complex::operator++() { // Prefix increment
    this->real++;
    return *this;
}

Complex Complex::operator++(int) { // Postfix increment
    Complex temp = *this;
    this->real++;
    return temp;
}

Complex& Complex::operator--() { // Prefix decrement
    this->real--;
    return *this;
}

Complex Complex::operator--(int) { // Postfix decrement
    Complex temp = *this;
    this->real--;
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

// Comparison operators (member functions)
bool Complex::operator==(const Complex& c)  {
    return (this->real == c.real) && (this->imag == c.imag);
}

bool Complex::operator!=(const Complex& c)  {
    return !(*this == c);
}

bool Complex::operator>(const Complex& c){
    return this->real > c.real;
}

bool Complex::operator<(const Complex& c){
    return this->real < c.real;
}

bool Complex::operator>=(const Complex& c){
    return this->real >= c.real;
}

bool Complex::operator<=(const Complex& c){
    return this->real <= c.real;
}



int Complex::operator[](int index) const {
    if (index == 0) {
        return real;
    } else if (index == 1) {
        return imag;
    } else {
        cout << "Index out of bounds. Use 0 for real part and 1 for imaginary part." << endl;
        return 0; 
    }
}