#include "stdafx.h"
#include <iostream>
#include <string>
#include "races.h"

int determineRace(int race)
{
	switch (race)																										//takes the user input 1-4 and assigned a Race
	{ 
	case 1:
		return RACE_HUMAN;
		break;
	case 2:
		return RACE_NIGHTELF;
		break;
	case 3:
		return RACE_GNOME;
		break;
	default:
		return RACE_DWARF;
		break;
	}

}

std::string raceName(int x)
{
	switch (x)																											//a function to return what type of race printed
	{
	case 1:
		return "Human";
		break;
	case 2:
		return "Night Elf";
		break;
	case 3:
		return "Gnome";
		break;
	default:
		return "Dwarf";
		break;
	}
}

std::string monsterName(int x)
{
	switch (x)																											//a function to return what type of monster printed 
	{
	case 1:
		return "Dragon";
		break;
	case 2:
		return "Skeleton";
		break;
	case 3:
		return "Zombie";
		break;
	default:
		return "Boar";
		break;
	}
}
struct Monster
{
	int health;
	Monsters type;
	std::string name;
};

void printMonsterStat(int x, Monster monster)																			//a function call to print the stats of the user chosen monster
{
	std::cout << "Health: " << monster.health << "\n";
	std::cout << "The monsters name is: " << monster.name << "\n";
}

Monster monsterStat(int x)																								//define what each monster has for hp, type, and the name
{
	Monster Dragon{ 200, MONSTER_DRAGON, "Dragooon" };
	Monster Skeleton{ 150, MONSTER_SKELETON, "Skelee" };
	Monster Zombie{ 160, MONSTER_ZOMBIE, "Zoom" };
	Monster Boar{ 120, MONSTER_BOAR, "Boodim" };
	
	switch (x)																											//this is going to return the stats for user selected monster
	{
	case 1:
		return Dragon;
		break;
	case 2:
		return Skeleton;
		break;
	case 3:
		return Zombie;
		break;
	default:
		return Boar;
		break;
	}
}

int main()
{
	int getRace;
	int getMonster;																										//define an int (going to be 1-4) to determine race and monster type
	
	
	std::cout << "Greetings hero! We have not seen a species like yours before, what do we call you? \n";
	std::cout << "*Please enter 1 for Human, 2 for Night Elf, 3 for Gnome, 4 for Dwarf.* \n";
	
	std::cin >> getRace;
	std::string userRace(raceName(getRace));
	
	std::cout << "You have selected: " << userRace << "\n";
	std::cout << "So Mr. " << userRace << ", I have a critical mission that will need your attention. \n";
	std::cout << "What shall we call you? \n";
	
	std::string userName;
	std::cin.ignore(32767, '\n');																						//needed in order for getline cin to work on next line, 32767 Magic number
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

