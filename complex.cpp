#include <iostream>

class complex
{
	public:
		complex(double re, double im);

		complex(const complex &other);
		complex &operator = (const complex &other)
		{
		//	double res = 
		}	

		
		complex add(complex c)
		{
			add.re += c.re;
		       	add.im += c.im;
			return *this;
		}
		
		complex minus(complex c)
		{
			minus.re -= c.re;
		       	minus.im -= c.im;
			return *this;
		}
		
	private:
		double re;
		double im;
}

int main()
{
	complex a(1, 2);
	complex b(a);
//	a = b;
//	a + b;
//	a - b;
//	a == b;
}

