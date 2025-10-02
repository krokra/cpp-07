#include "Array.hpp"

// Default Constructor
template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
    std::cout << "Array default constructor called" << std::endl;
}

// Parameterized Constructor
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
    std::cout << "Array parameterized constructor called with size " << n << std::endl;
}

// Copy Constructor
template <typename T>
Array<T>::Array(const Array& other) : _array(new T[other._size]), _size(other._size) {
    std::cout << "Array copy constructor called" << std::endl;
	for (unsigned int i = 0; i < other._size; i++) {
		this->_array[i] = other._array[i];
	}
}

// Assignment Operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    std::cout << "Array copy assignment operator called" << std::endl;
    if (this != &other) {
        delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = other._array[i];
		}
    }
    return *this;
}

// Subscript Operator (non-const)
template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index < this->_size)
		return this->_array[index];
	else
		throw OutOfBoundsException();
}

// Subscript Operator (const)
template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index < this->_size)
		return this->_array[index];
	else
		throw OutOfBoundsException();
}

// Destructor
template <typename T>
Array<T>::~Array() {
	delete[] this->_array;
    std::cout << "Array destructor called" << std::endl;
}

// Size Member Function
template <typename T>
unsigned int Array<T>::size() const {
	return this->_size;
}
