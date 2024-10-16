#include <iostream>
#include <string>

template <typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T Min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    std::cout << a << " " << b << std::endl;
}
struct Person
{
    std::string name;
    int age;
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << "\n"
       << p.name << " is " << p.age << " years old";
    return os;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    std::cout << "Swap Performed" << std::endl;
}

int main()
{
    int x{100};
    int y{200};
    std::cout << "Before Swap: x=" << x << ", y=" << y << std::endl;
    Swap(x, y);
    std::cout << "After Swap: x=" << x << ", y=" << y << std::endl;

    char a{'A'};
    char b{'B'};
    std::cout << "Before Swap: a=" << a << ", b=" << b << std::endl;
    Swap(a, b);
    std::cout << "After Swap: a=" << a << ", b=" << b << std::endl;

    Person p1{"John", 23};
    Person p2{"Jane", 22};

    // Person p3 = Min(p1, p2);
    // std::cout << p3.name << " is younger" << std::endl;

    // std::cout << "Max(3, 4): " << Max<int>(3, 4) << std::endl;
    // std::cout << "Max(3.3, 4.4): " << Max(3.3, 4.4) << std::endl;
    // std::cout << "Max('a', 'b'): " << Max('a', 'b') << std::endl;
    // std::cout << "Max(\"abc\", \"def\"): " << Max(std::string("abc"), std::string("def")) << std::endl;
    // std::cout << "Max((9*18+5), (11*5+56)): " << Max((9 * 18 + 5), (11 * 5 + 56)) << std::endl;

    func<int, std::string>(10, "Hello");
    func<char, float>('A', 3.14);
    func("Hello", 3.14);
    func(int{10}, std::string{"Hello"});
    func(p1, p2);

    return 0;
}