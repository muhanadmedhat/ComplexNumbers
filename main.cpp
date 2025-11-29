#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    cout << "=== Testing Constructors ===" << endl;
    Complex c1(3, 4);           // Parameterized constructor
    Complex c2;                 // Default constructor
    cout << "c1: ";
    c1.displayComplex();
    cout << "c2: ";
    c2.displayComplex();
    
    cout << "\n=== Testing Setters and Getters ===" << endl;
    c2.setReal(5);
    c2.setImag(-2);
    cout << "c2 after setters: ";
    c2.displayComplex();
    cout << "c2 real part: " << c2.getReal() << endl;
    cout << "c2 imaginary part: " << c2.getImag() << endl;
    
    cout << "\n=== Testing addComplex and addInt ===" << endl;
    Complex c3 = c1.addComplex(c2);
    cout << "c1 + c2 using addComplex: ";
    c3.displayComplex();
    Complex c4 = c1.addInt(10);
    cout << "c1 + 10 using addInt: ";
    c4.displayComplex();
    
    cout << "\n=== Testing operator+ ===" << endl;
    Complex c5 = c1 + c2;
    cout << "c1 + c2: ";
    c5.displayComplex();
    Complex c6 = c1 + 7;
    cout << "c1 + 7: ";
    c6.displayComplex();
    
    cout << "\n=== Testing operator- ===" << endl;
    Complex c7 = c1 - c2;
    cout << "c1 - c2: ";
    c7.displayComplex();
    Complex c8 = c1 - 2;
    cout << "c1 - 2: ";
    c8.displayComplex();
    
    cout << "\n=== Testing operator++ (prefix and postfix) ===" << endl;
    Complex c9(5, 3);
    cout << "Original c9: ";
    c9.displayComplex();
    cout << "++c9: ";
    (++c9).displayComplex();
    cout << "c9 after prefix: ";
    c9.displayComplex();
    
    cout << "c9++: ";
    (c9++).displayComplex();
    cout << "c9 after postfix: ";
    c9.displayComplex();
    
    cout << "\n=== Testing operator-- (prefix and postfix) ===" << endl;
    Complex c10(8, 6);
    cout << "Original c10: ";
    c10.displayComplex();
    cout << "--c10: ";
    (--c10).displayComplex();
    cout << "c10 after prefix: ";
    c10.displayComplex();
    
    cout << "c10--: ";
    (c10--).displayComplex();
    cout << "c10 after postfix: ";
    c10.displayComplex();
    
    cout << "\n=== Testing operator<< (stream output) ===" << endl;
    cout << "Using cout << c1: " << c1 << endl;
    cout << "Using cout << c2: " << c2 << endl;
    
    cout << "\n=== Testing operator>> (stream input) ===" << endl;
    Complex c11;
    cout << "Enter real and imaginary parts (e.g., 6 -3): ";
    cin >> c11;
    cout << "You entered: " << c11 << endl;
    
    cout << "\n=== Testing operator== ===" << endl;
    Complex c12(3, 4);
    Complex c13(3, 4);
    Complex c14(5, 2);
    cout << "c12: " << c12 << endl;
    cout << "c13: " << c13 << endl;
    cout << "c14: " << c14 << endl;
    cout << "c12 == c13: " << (c12 == c13 ? "true" : "false") << endl;
    cout << "c12 == c14: " << (c12 == c14 ? "true" : "false") << endl;
    
    cout << "\n=== Testing operator!= ===" << endl;
    cout << "c12 != c13: " << (c12 != c13 ? "true" : "false") << endl;
    cout << "c12 != c14: " << (c12 != c14 ? "true" : "false") << endl;
    
    cout << "\n=== All tests completed! ===" << endl;
    return 0;
}