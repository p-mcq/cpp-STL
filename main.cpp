#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>

/// @brief Testing Iterators with Vectors
void Test1();

/// @brief Alternative way of iterating through a container
void Test2();

/// @brief Const iterators
void Test3();

/// @brief Reverse iterators, Maps
void Test4();

/// @brief Iterating through a subsection of a container
void Test5();

int main()
{
    // Test1();
    // Test2();
    // Test3();
    // Test4();
    Test5();
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
    std::vector<int> intVec{1, 2, 3, 4, 5};
    auto it = intVec.begin();

    while (it != intVec.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
}

void Test3()
{
    // Const iterators
    std::vector<int> intVec{1, 2, 3, 4, 5};
    // std::vector<int>::const_iterator it = intVec.begin();
    // OR
    auto it = intVec.cbegin(); // Line is the same as above

    while (it != intVec.cend())
    {
        std::cout << *it << std::endl;
        it++;
    }

    // Modifying the vector can't be done with const iterators
    while (it != intVec.end())
    {
        // *it = 0; // Error - Won't compile
    }
}

void Test4()
{
    // Reverse iterators
    std::vector<int> intVec{1, 2, 3, 4, 5};
    // std::vector<int>::reverse_iterator it = intVec.rbegin();
    // OR
    auto it = intVec.rbegin();
    std::cout << "Prints list in reverse order" << std::endl;
    while (it != intVec.rend())
    {
        std::cout << *it << std::endl;
        it++; // Increment to the next element - doesn't work with --it, will make it go up the vector instead of down
    }

    // Const reverse iterators
    std::list<std::string> names{"John", "Jane", "Joe", "Jill"};
    // std::list<std::string>::const_reverse_iterator it2 = names.crbegin();
    // OR
    auto it2 = names.crbegin();
    std::cout << "Prints list in reverse order" << std::endl;
    std::cout << "Name iterator is pointing to: : " << *it2 << std::endl;
    it2++; // increment down the list - now pointing at Joe
    std::cout << "Name iterator is pointing to: : " << *it2 << std::endl;

    // Maps
    std::map<std::string, int> ages{
        {"John", 21},
        {"Jane", 22},
        {"Joe", 23},
        {"Jill", 24}};

    // std::map<std::string, int>::iterator it3 = ages.begin();
    // OR
    auto it3 = ages.begin();
    while (it3 != ages.end())
    {
        std::cout << it3->first << " is " << it3->second << " years old." << std::endl;
        it3++;
    }
}

void Test5()
{
    std::vector<int> intVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = intVec.begin() + 2;
    auto finish = intVec.end() - 3;

    while (start != finish)
    {
        std::cout << *start << std::endl;
        start++;
    }
}
