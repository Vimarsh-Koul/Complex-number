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
std::ostream &operator<<(std::ostream &output, const complex c){

std::cout<<"Your number is "<<"("<<c.real<<")"<<" + "<<"("<<c.imag<<")"<<"i"<<std::endl;
}

int main()
{
	complex a(1,2),b(3,4),c;
	c=a+b;
	cout<<a;
	cout<<b;
	cout<<c;
	return 0;
}