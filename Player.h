#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
    std::string name;
    int age;

public:
    Player() = default;
    Player(std::string name, int age) : name{name}, age{age} {}
    std::string GetName() const { return name; }

    bool operator<(const Player &p) const
    {
        return this->age < p.age;
    }

    bool operator==(const Player &p) const
    {
        return this->name == p.name && this->age == p.age;
    }

    ~Player() = default;
};

#endif // _PLAYER_H_