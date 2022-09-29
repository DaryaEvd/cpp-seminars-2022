#pragma once
#include <cstddef>

class vector
{
	public:
		vector(int capacity = 8);
		~vector();
		
		void push_back(int num);
		int size();
		void set(int num, int idx);
		int at(int idx);

		vector(const vector &other);
		vector &  operator = (const vector &other);		
		
		int &operator[](size_t idx);

	private:
		int capacity_;
		int size_;
		int *data_;

		void resize(int newCapacity);
};

