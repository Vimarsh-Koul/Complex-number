#ifndef COMPLEX_H
#define COMPLEX_H
class complex
{
private:
	float real,imag;
public:
	friend std::ostream &operator<<(std::ostream &output, const complex c);
	complex(float r=0.0, float i=0.0)
	{
		real=r;
		imag=i;
	}	
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
};
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

#endif
