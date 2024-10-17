#include <iostream>
#include "Item.h"
#include "MyPair.h"
#include <vector>

int main()
{
    // Item<int> item1("Frank", 100);
    // std::cout << item1.getName() << " " << item1.getValue() << std::endl;

    // Item<std::string> item2("Frank", "Professor");
    // std::cout << item2.getName() << " " << item2.getValue() << std::endl;

    // Item<Item<std::string>> item3("Frank", {"C++", "Professor"});
    // std::cout << item3.getName() << " "
    //           << item3.getValue().getName() << " "
    //           << item3.getValue().getValue() << std::endl;

    // std::vector<Item<int>> items;
    // items.push_back(Item<int>("Larry", 100));
    // items.push_back(Item<int>("Moe", 200));
    // items.push_back(Item<int>("Curly", 300));

    // for (auto &&i : items)
    // {
    //     std::cout << i.getName() << " " << i.getValue() << std::endl;
    // }

    MyPair<std::string, int> pair{"Paul", 27};

    std::cout << pair.key << " " << pair.value << std::endl;
    return 0;
}