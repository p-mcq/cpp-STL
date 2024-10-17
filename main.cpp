#include <string>
#include "Array.h"

int main()
{
    std::string str = "Hello";

    Array<int, 5> intArray;
    std::cout << "Size of intArray: " << intArray.GetSize() << std::endl;
    std::cout << intArray << std::endl;

    intArray.FillArray(5);
    std::cout << intArray << std::endl;

    intArray.FillArrayRandomValues(1, 10);
    std::cout << intArray << std::endl;

    intArray[1] = 10;
    std::cout << intArray << std::endl;

    Array<std::string, 5> strArray(str);
    std::cout << "Size of strArray: " << strArray.GetSize() << std::endl;
    std::cout << strArray << std::endl;
    for (size_t i = 0; i < strArray.GetSize(); i++)
    {
        strArray[i] = str[i];
    }
    std::cout << strArray << std::endl;

    return 0;
}