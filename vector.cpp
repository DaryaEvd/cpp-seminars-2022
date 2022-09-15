class vector {
        int *data;
        int size;
        int capacity;

        vector (int capacity) {
                this->capacity = capacity;
                this->size = size;
                this->data = new int[capacity]();
        }

        ~vector() { 
		delete[] data;
       	}

        // adds element to the last avaialable position,
        // resizes vector if current capacity is reached
        void push_back (int num){
		if (this->size < this->capacity){
			this->data[(this->size)++] = num;
		}
		resize (2 * capacity);		
	}
      
      
	// resizes vector to given capacity
        void resize (int new_capacity){
		int new_data = new int[new_capacity]();
		for(size_t i = 0; i < this->size; i++){
			new_data[i] = data[i];
		}
		capacity = new_capacity;

		delete[] new_data;
	}

        int size() {
	       	return this->size;
       	}

        void set(int num, int idx);
        int at(int idx);
};

int main(int argc, char **argv) {
        // vector v;
        // v.size();
        // // size(&v)
        // vector v1;
        // v1.size();
}

