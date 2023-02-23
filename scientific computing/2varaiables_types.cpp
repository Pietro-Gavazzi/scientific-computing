#include <iostream>
// #include <string>
// using namespace std;

int main() {
double a = -1.9; // declares a variable of type double with identifier a and

double b (3.9); // likewise, with the "constructor initialization" syntax
double c {7.1}; // likewise, with the "uniform initialization" syntax
// double 2a = 3; is not allowed: identifiers must begin with a letter
int i = a; // narrowing cast
int j = b; // narrowing cast
double d = i; // widening cast
double a_div2_wrong = 1/2*a; // try to understand what is wrong here
double a_div2_right = 1./2*a


std::string s="test";
double x; // declare x without specifying a value
double A = 3.2; // C++ is a case-sensitive language
std::cout << "a = " << a << std::endl;
std::cout << "b = " << b << std::endl;
std::cout << "c = " << c << std::endl;
std::cout << "i = " << i << std::endl;
std::cout << "j = " << j << std::endl;
std::cout << "d = " << d << std::endl;
std::cout << "a_div2_wrong = " << a_div2_wrong << std::endl;
std::cout << 1/2 << std::endl;
std::cout << "(int)a = " << (int)a << std::endl;
std::cout << "s = " << s << std::endl;
std::cout << "x = " << x << std::endl;
std::cout << "A = " << A << std::endl;
}