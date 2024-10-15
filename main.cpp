#include <iostream>
// Macro definition
#define MAX(a, b) ((a > b) ? a : b)
// The incorrect square macro, missing parentheses which affect the result when using it
#define INCORRECT_SQUARE(a) a *a
// The correct square macro, with parentheses to ensure the correct result
#define CORRECT_SQUARE(a) ((a) * (a))
int main()
{
    // Using ints
    int x{5};
    int y{10};
    int z{MAX(x, y)};
    std::cout << "The greater value is: " << z << std::endl;

    // Using floats
    float a{5.5};
    float b{10.5};
    float c{MAX(a, b)};
    std::cout << "The greater value is: " << c << std::endl;

    // Using doubles
    double d{5123.55421134};
    double e{130.553};
    double f{MAX(d, e)};
    std::cout << "The greater value is: " << f << std::endl;

    // And so on

    // Using the incorrect square macro
    int g{5};
    std::cout << "The answer for the following should be 4 but it is not because the operator precedence in the macro is incorrect" << std::endl;
    std::cout << "The macro instead does this calculation 100 / 5 * 5 = 100" << std::endl;
    std::cout << "The answer is: " << 100 / INCORRECT_SQUARE(g) << std::endl;
    std::cout << "Using a correctly defined macro, the answer is as expected then: " << std::endl;
    std::cout << "i.e. 100 / (5*5)" << std::endl;
    std::cout << "The answer is: " << 100 / CORRECT_SQUARE(g) << std::endl;
    return 0;
}