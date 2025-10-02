#include "iter.hpp"

template <typename T>
void printElement(T &element) {
    std::cout << element << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Iterating over int array: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    std::string strArray[] = {"Hello", "World", "!"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);
	
    std::cout << "Iterating over string array: ";
    iter(strArray, strArrayLength, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
