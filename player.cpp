#include "header.hpp"

player info()
{
	player playerInfo;
    std::cout << "Enter player name: ";
    std::cin >> playerInfo.name;
	playerInfo.health = 100;
    playerInfo.abilities;
	return playerInfo;
}

void addAbility(player& p, abilities ability)
{
	p.abilities |= ability;
}

void removeAbility(player& p, abilities ability)
{
	p.abilities &= ~ability;
}
bool checkAbility(player& p, abilities ability)
{
	return p.abilities & ability;
}
void toggleAbility(player& p, abilities ability)
{
	p.abilities ^= ability;
}


void showAbilities(player& p)
{
    std::cout << "Abilities: ";

    if (checkAbility(p, Fireball))
    {
        std::cout << "Fireball\n";
    }

    if (checkAbility(p, Shield))
    {
        std::cout << "Shield\n";
    }

    if (checkAbility(p, Invisible))
    {
        std::cout << "Invisible\n";
    }

    if (checkAbility(p, DoubleJump))
    {
        std::cout << "Double Jump\n";
    }

    if (checkAbility(p, Poisoned))
    {
        std::cout << "Poisoned\n";
    }

    if (checkAbility(p, Stunned))
    {
        std::cout << "Stunned\n";
    }
}
void showPlayer(player& p)
{
    std::cout << "Name: " << p.name << '\n';
    std::cout << "Health: " << p.health << '\n';

 }