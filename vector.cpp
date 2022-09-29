#include "vector.hpp"

#include <algorithm>
#include <cassert>
#include <iostream>

vector::vector(int capacity)
	: capacity_(capacity), size_(0), data_(new int[capacity]) {}

vector::vector(const vector &other)
	: capacity_(other.capacity_),
	  size_(other_size_),
	  data_(new int[capacity])
{
	std::copy(other.data_, other.data_ + size_, data_);
}

vector &vector:: operator = (const vector &other)
{
	capacity_ = other.capacity_;
	size_ = other.size_;
 	std::swap(data_, other.data_);
 	return *this;
}

int &vector::operator[](size_t idx)
{
	assert(idx >= 0 && idx <= size_);
	return data_[idx];
}

// adds element to the last avaialable position,
// resizes vector if current capacity is reached
void vector:: push_back(int num)
{
	if (this->size_ < this->capacity_){
		this->data_[this->size_] = num;
		size_ ++;
	}
	resize (2 * capacity_);
}

int size(){ return this->size_; }

~vector() { delete[] data_;}

// resizes vector to given capacity
void vector::resize(int newCapacity)
{
	int *newData = new int[newCapacity];
	std::copy(data_, data_ + size_, newData);
	delete [] newData;
	data_ = newData;
	capacity_ = newCapacity;
}

int main(int argc, char **argv)
{
	vector v;
}

