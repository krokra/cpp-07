#include "Array.hpp"

// Default Constructor
Array<void>::Array() {
    std::cout << "Array default constructor called" << std::endl;
}

Array::Array(unsigned int n) {
    std::cout << "Array parameterized constructor called with size " << n << std::endl;
    // Initialize array of size n here
    
}

// Copy Constructor
Array::Array(const Array& other) {
    std::cout << "Array copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Array& Array::operator=(const Array& other) {
    std::cout << "Array copy assignment operator called" << std::endl;
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

// Destructor
Array::~Array() {
    std::cout << "Array destructor called" << std::endl;
}
