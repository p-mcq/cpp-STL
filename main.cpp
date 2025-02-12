#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>

#include "Player.h"

/// @brief Find a corresponding play in a vector of players
void FindTest();

int main()
{
    FindTest();
    return 0;
}

void FindTest()
{
    std::vector<int> numbers{1, 2, 3, 4, 5};

    // std::vector<Player>::iterator loc = std::find(players.begin(), players.end(), p4);
    // OR
    auto loc = std::find(std::begin(numbers), std::end(numbers), 3);

    if (loc != numbers.end())
    {
        std::cout << "Found the number: " << *loc << std::endl;
    }
    else
    {
        std::cout << "Number not found" << std::endl;
    }

    std::list<Player> players{
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}};

    auto loc1 = std::find(std::begin(players), std::end(players), Player{"Moe", 20});

    if (loc1 != players.end())
    {
        std::cout << "Found the player: " << loc1->GetName() << std::endl;
    }
    else
    {
        std::cout << "Player not found" << std::endl;
    }
}