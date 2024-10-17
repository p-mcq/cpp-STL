#ifndef _ITEM_H
#define _ITEM_H
#include <string>

template <typename T>
class Item
{
private:
    std::string name;
    T value;

public:
    Item();
    Item(std::string name, T value);
    std::string getName() const { return name; };
    T getValue() const { return value; };
    ~Item();
};

template <typename T>
inline Item<T>::Item()
{
}

template <typename T>
inline Item<T>::Item(std::string name, T value)
    : name(name), value(value)
{
}

template <typename T>
inline Item<T>::~Item()
{
}

#endif // ITEM_H
