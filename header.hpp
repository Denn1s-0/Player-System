#include <iostream>
#include <string>

struct player
{
	std::string name;
	int health;
	int abilities;
};


enum abilities
{
	Fireball = 1 << 0,
	Shield = 1 << 1,
	Invisible = 1 << 2,
	DoubleJump = 1 << 3,
	Poisoned = 1 << 4,
	Stunned = 1 << 5,
};

player info();
void addAbility(player& p, abilities ability);
void removeAbility(player& p, abilities ability);
bool checkAbility(player& p, abilities ability);
void toggleAbility(player& p, abilities ability);
void showAbilities(player& p);
void showPlayer(player& p);

