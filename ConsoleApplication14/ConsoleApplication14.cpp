#include "stdafx.h"
#include <iostream>
#include <string>
#include "races.h"

int determineRace(int race)
{
	if (race == 1)
		return RACE_HUMAN;
	if (race == 2)
		return RACE_NIGHTELF;
	if (race == 3)
		return RACE_GNOME;
	else
		return RACE_DWARF;

}

std::string raceName(int x)
{
	if (x == 1)
		return "Human";
	if (x == 2)
		return "Night Elf";
	if (x == 3)
		return "Gnome";
	if (x == 4)
		return "Dwarf";
}

std::string monsterName(int x)
{
	if (x == 1)
		return "Dragon";
	if (x == 2)
		return "Skeleton";
	if (x == 3)
		return "Zombie";
	if (x == 4)
		return "Boar";
}
struct Monster
{
	int health;
	Monsters type;
	std::string name;
};

void printMonsterStat(int x, Monster monster)
{
	std::cout << "Health: " << monster.health << "\n";
	std::cout << "The monsters name is: " << monster.name << "\n";
}

Monster monsterStat(int x)
{
	Monster Dragon{ 200, MONSTER_DRAGON, "Dragooon" };
	Monster Skeleton{ 150, MONSTER_SKELETON, "Skelee" };
	Monster Zombie{ 160, MONSTER_ZOMBIE, "Zoom" };
	Monster Boar{ 120, MONSTER_BOAR, "Boodim" };
	if (x == 1)
		return Dragon;
	if (x == 2)
		return Skeleton;
	if (x == 3)
		return Zombie;
	if (x == 4)
		return Boar;
}

int main()
{
	int getRace;
	int getMonster;
	
	
	std::cout << "Greetings hero! We have not seen a species like yours before, what do we call you? \n";
	std::cout << "*Please enter 1 for Human, 2 for Night Elf, 3 for Gnome, 4 for Dwarf.* \n";
	
	std::cin >> getRace;
	std::string userRace(raceName(getRace));
	
	std::cout << "You have selected: " << userRace << "\n";
	std::cout << "So Mr. " << userRace << ", I have a critical mission that will need your attention. \n";
	std::cout << "What shall we call you? \n";
	
	std::string userName;
	std::cin.ignore(32767, '\n');
	std::getline(std::cin, userName);
	
	std::cout << "It is a pleasure to meet your " << userRace << " ass, silly punk named " << userName << "\n";
	std::cout << "I need you to slay one of the many beasts roaming these areas. There is a dragon, a skeleton, a zombie, and a boar. \nWhich would you like to fight? \n";
	std::cout << "*Please press 1 to fight the Dragon, 2 for Skeleton, 3 for Zombie, and 4 for Boar*: ";
	
	std::cin >> getMonster;
	std::string userMonster(monsterName(getMonster));
	Monster userMonsterStat(monsterStat(getMonster));
	
	std::cout << "You have selected to fight the " << userMonster << ". This monster has these stats: \n"; 
	printMonsterStat(getMonster, userMonsterStat);
	

    return 0;
}

