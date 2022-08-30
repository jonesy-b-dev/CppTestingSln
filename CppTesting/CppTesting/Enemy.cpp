#include "iostream"
#include "Enemy.h"


Enemy::Enemy(int hlth, int dmg, int rnge, int stmn) : Health(hlth), Damage(dmg), Range(rnge), Stamina(stmn)
{
	std::cout << "Hello enemy" << std::endl;
}

Enemy::Enemy()
{
	std::cout << "Hello enemy" << std::endl;
}

//ninja::ninja(int hlth, int dmg, int rnge, int stmn) : Health(hlth), Damage(dmg), Range(rnge), Stamina(stmn)
//{

//}

ninja::ninja()
{

}