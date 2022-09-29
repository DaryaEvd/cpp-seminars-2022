#pragma once
#include <cstddef>

class vector
{
	public:
		vector(int capacity = 8);
		vector(const vector &other);
		vector &operator = (const vector &other);
		int &operator[](size_t idx);

		void push_back(int num);
		int size();

		~vector();		

	private:
		int capacity_;
		int size_;
		int *data_;

		void resize(int newCapacity);
};

