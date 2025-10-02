# ifndef ITER_HPP
# define ITER_HPP

# include <stddef.h>
# include <iostream>

template <typename T> void iter(T *array, size_t arrayLength, void (*func)(T&)) {
	for (int i = 0; i < arrayLength; i++) {
		func(array[i]);
	}
}

# endif