#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
    unsigned int size() const;
	class OutOfBoundsException : public std::exception {
		const char* what() const throw() {
			return "Invalid index : Out of Bounds";
		};
	};
};

#endif
