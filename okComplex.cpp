#include <iostream>

class complex
{
	complex(const double re = 0, const double im = 0)
		: re_(re), im_(im) {}
	
	//должен быть const, тк переменная временная
	complex(const complex &other)
		: re_(other.re_), im_(other.im_) {}
 
	complex &operator = (const complex &other)
	{
		this->re_ = other.re_;
		this->im_ = other.im_;
		return *this;
	}

	bool operator == (const complex &other)
	{
		return (this->re_ == other.re_) && (this->im_ == other.im_);
	}

	complex operator+(const complex &other)
		//возваращем complex а не complex&, тк переменная выделена на стеке
		//если передаем инт в функции, потом передали на нее ссылку, то потом
		//может все затереться (
		// !! вспомнить, как работает stek frame
	{
		return complex(re_ + other.re_, im_ + other.im_);
	}

	complex operator-(const complex &other)
	{
		return complex(re_ - other.re_, im_ - other.im_);
	}

	private:
		double re_;
		double im_;

};

int main()
{
	complex re(1, 2);
	complex im(re);
	std::cout << (a == b) << std::endl;
}

