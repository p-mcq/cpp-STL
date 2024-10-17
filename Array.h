#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <random>

template <class T, int N>
class Array
{

    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &array)
    {
        std::cout << "[ ";
        for (size_t i = 0; i < array.size; i++)
        {
            os << array.values[i] << " ";
        }
        std::cout << "]";
        return os;
    }

private:
    int size{N};
    T values[N];

public:
    Array() = default;
    ~Array() = default;
    Array(T initialValue)
    {
        for (size_t i = 0; i < size; i++)
        {
            values[i] = initialValue;
        }
    }

    int GetSize() const
    {
        return size;
    }

    void FillArray(T fillValue)
    {
        for (size_t i = 0; i < size; i++)
        {
            values[i] = fillValue;
        }
    }

    void FillArrayRandomValues(T min, T max) // Currently only fills array with random values
    {
        std::random_device rd;
        std::mt19937 rng(rd());
        std::uniform_int_distribution<T> uni(min, max);

        for (size_t i = 0; i < size; i++)
        {
            values[i] = uni(rng);
        }
    }

    T &operator[](int index)
    {
        return values[index];
    }
};

#endif // _ARRAY_H_