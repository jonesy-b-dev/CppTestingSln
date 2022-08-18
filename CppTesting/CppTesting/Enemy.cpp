#include "iostream"
#include "Enemy.h"


Enemy::Enemy(int hlth, int dmg, int rnge, int stmn) : Health(hlth), Damage(dmg), Range(rnge), Stamina(stmn)
{
	std::cout << "Hello world" << std::endl;
}

