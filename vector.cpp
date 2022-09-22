#include <cassert>
#include <iostream>

class vector
{
        vector(int capacity)
       	{
                this->capacity_ = capacity;
                this->size_ = 0;
                this->data_ = new int[capacity]();
        }

        ~vector() 
	{
	       	delete[] data_;
       	}

        // adds element to the last avaialable position,
        // resizes vector if current capacity is reached
        void push_back(int num)
	{
		if (this->size_ < this->capacity_){
			this->data_[this->size_] = num;
			size_ ++;
		}
		resize (2 * capacity_);	
		
	}
       
        
	int size()
       	{ 
		return this->size_; 
	}

	/*
        void set(int num, int idx)
	{
		return 	
	} 

        int at(int idx)
	{

	}
	*/
	
	vector(const vector &other)
	{
		std::cout << "copy constructor" << std:: endl;
		this->size_ = other.size_;
		this->capacity_ = other.capacity_;
		this->data_ = new int[this->capacity_];
		
		for (int i = 0; i < this->capacity_; i++)
		{
			this->data_[i] = other.data_[i];

		}
	}

	vector &  operator = (const vector &other)
	{
		std::cout << " operator = " << std::endl;
		this->size_ = other.size_;
		
		if(this->data_ != nullptr)
		{
			delete[] this->data_;
		}
		this->data_ = new int[other.size_];

		for (int i = 0; i < other.size_; i++)
		{
			this->data_[i] = other.data_[i];
		}
		return *this;
	}	
	
	private:
		int *data_;
                int size_;
                int capacity_;

		// resizes vector to given capacity
		void resize(int newCapacity)
	       	{
               		int *newData = new int[newCapacity];
               		for (size_t i = 0; i < capacity_; i++)
			{
                        	newData[i] = this->data_[i];
                	}
			delete [] newData;
			data_ = newData;
			capacity_ = newCapacity;
        	}

};

int main(int argc, char **argv)
{
	vector vect1(50);
	vector vect2(vect1); //vector vect2 = vect1;
}
