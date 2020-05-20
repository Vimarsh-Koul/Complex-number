#include <iostream>
#include "complex.h"
using namespace std;
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