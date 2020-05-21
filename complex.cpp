#include <iostream>
#include "complex.h"
using namespace std;
complex complex::operator +(complex c)
{
	complex sol;
	sol.real = real+c.real;
	sol.imag = imag+c.imag;
	return sol;
}
complex complex::operator -(complex c)
{
	complex sol;
	sol.real = real-c.real;
	sol.imag = imag-c.imag;
	return sol;
}
complex complex::operator *(complex c)
{
	complex sol;
	sol.real = real*c.real - imag*c.imag;
	sol.imag = real*c.imag + c.real*imag;
	return sol;
}
std::ostream &operator<<(std::ostream &output, const complex c){

std::cout<<"Your number is "<<"("<<c.real<<")"<<" + "<<"("<<c.imag<<")"<<"i"<<std::endl;
}
int main()
{
 	complex c(2.2,3.3);
 	complex b(1.1,5.5);
 	complex a;
 	complex d;
 	complex mul;
 	a=b+c;
 	d=c-b;
 	mul=c*b;
 	std::cout<<a;
 	std::cout<<d;
 	std::cout<<mul;
 	return 0;
}