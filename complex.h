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


#endif
