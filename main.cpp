#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>

/// @brief Testing Iterators with Vectors
void Test1();

/// @brief Testing Iterators with Sets
void Test2();

/// @brief Testing Iterators with Maps
void Test3();

/// @brief Testing Iterators with Lists
void Test4();

int main()
{
    Test1();
    return 0;
}

void Test1()
{
    std::vector<int> intVec{1, 2, 3, 4, 5};
    std::vector<int>::iterator it = intVec.begin();
    std::cout << *it << std::endl;

    it++;
    std::cout << *it << std::endl;

    it += 2;
    std::cout << *it << std::endl;

    it = intVec.end() - 1;

    std::cout << "End: " << *it << std::endl;
}

void Test2()
{
}

void Test3()
{
}

void Test4()
{
}
