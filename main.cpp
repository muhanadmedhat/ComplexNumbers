#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    cout << "=== Testing Constructors ===" << endl;
    Complex c1(3, 4);           // Parameterized constructor
    Complex c2;                 // Default constructor
    cout << "c1: ";
    cout << "c1[0]: " << c1[0] << ", c1[1]: " << c1[1] << endl;
    cout << "c2[0]: " << c2[0] << ", c2[1]: " << c2[1] << endl;
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
    
    cout << "\n=== Testing Copy Constructor (Deep Copy) ===" << endl;
    Complex c15(7, 9);
    cout << "Original c15: " << c15 << endl;
    
    Complex c16 = c15;  // Copy constructor
    cout << "Copied c16: " << c16 << endl;
    
    cout << "Modifying c16...\n";
    c16.setReal(100);
    c16.setImag(200);
    
    cout << "c15 after modifying c16: " << c15 << endl;
    cout << "c16 after modification: " << c16 << endl;
    cout << "Both are independent (deep copy works)!\n";
    
    cout << "\n=== Testing Copy Assignment Operator ===" << endl;
    Complex c17(1, 2);
    Complex c18(8, 9);
    
    cout << "Before assignment:\n";
    cout << "c17: " << c17 << endl;
    cout << "c18: " << c18 << endl;
    
    c18 = c17;  // Copy assignment
    
    cout << "After c18 = c17:\n";
    cout << "c17: " << c17 << endl;
    cout << "c18: " << c18 << endl;
    
    cout << "\nTesting self-assignment (c18 = c18)...\n";
    c18 = c18;
    cout << "c18 after self-assignment: " << c18 << endl;
    
    cout << "\n=== Testing Move Constructor ===" << endl;
    Complex c19(15, 25);
    cout << "Original c19 before move: " << c19 << endl;
    
    Complex c20 = std::move(c19);  // Move constructor
    cout << "c20 after move: " << c20 << endl;
    cout << "c19 after move: " << c19 << " (should be 0+0i)\n";
    cout << "Note: For Complex with simple types, move doesn't provide performance benefit.\n";
    
    cout << "\n=== Testing Move Assignment Operator ===" << endl;
    Complex c21(30, 40);
    Complex c22(50, 60);
    
    cout << "Before move assignment:\n";
    cout << "c21: " << c21 << endl;
    cout << "c22: " << c22 << endl;
    
    c22 = std::move(c21);  // Move assignment
    
    cout << "After c22 = std::move(c21):\n";
    cout << "c22: " << c22 << endl;
    cout << "c21: " << c21 << " (should be 0+0i)\n";
    
    cout << "\n=== Testing Self-Move Assignment ===" << endl;
    Complex c23(77, 88);
    cout << "c23 before self-move: " << c23 << endl;
    
    c23 = std::move(c23);  // Self-move
    
    cout << "c23 after self-move: " << c23 << " (should be unchanged)\n";
    
    cout << "\n=== Move vs Copy Comparison ===" << endl;
    Complex original(123, 456);
    cout << "Original complex: " << original << endl;
    
    cout << "\nCopy operation (original stays intact):\n";
    Complex copied = original;
    cout << "Copied: " << copied << endl;
    cout << "Original after copy: " << original << endl;
    
    cout << "\nMove operation (original becomes 0+0i):\n";
    Complex moved = std::move(original);
    cout << "Moved: " << moved << endl;
    cout << "Original after move: " << original << endl;
    
   


    cout << "\n=== All tests completed! ===" << endl;
    return 0;
}