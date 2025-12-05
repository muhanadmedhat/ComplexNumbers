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
        
        // Rule of Five
        Complex(const Complex& other);              // Copy constructor
        Complex(Complex&& other) noexcept;          // Move constructor
        Complex& operator=(const Complex& other);   // Copy assignment operator
        Complex& operator=(Complex&& other) noexcept; // Move assignment operator
        ~Complex();                                  // Destructor
        
        void setReal(int);
        void setImag(int);
        int getReal();
        int getImag();
        
        Complex addComplex(const Complex& c);
        Complex addInt(int x);
        void displayComplex();
        
        // Arithmetic operators with another Complex
        friend Complex operator+(const Complex& c1, const Complex& c2);
        friend Complex operator-(const Complex& c1 , const Complex& c2);
        
        
        Complex operator+(int x) const;
        Complex operator-(int x) const;
        
        // Increment and Decrement 
        Complex& operator++(); // Prefix increment
        Complex operator++(int); // Postfix increment
        Complex& operator--(); // Prefix decrement
        Complex operator--(int); // Postfix decrement
        
        // Stream operators 
        friend ostream& operator<<(ostream& out, const Complex& c);
        friend istream& operator>>(istream& in, Complex& c);

        // Comparison operators 
        bool operator==(const Complex& c) ;
        bool operator!=(const Complex& c) ;
        bool operator>(const Complex& c);
        bool operator<(const Complex& c);
        bool operator>=(const Complex& c);
        bool operator<=(const Complex& c);
        
        int operator[](int index) const;
};







#endif // COMPLEX_H