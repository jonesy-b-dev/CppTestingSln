#pragma once
class Enemy
{
public:
	Enemy(int hlth, int dmg, int rnge, int stmn);
	Enemy();
protected:
	int Health;
	int Damage;
	int Range;
	int Stamina;
public:
	void virtual attack() = 0;
};

class ninja : public Enemy
{
	ninja(int hlth, int dmg, int rnge, int stmn);
	ninja();
	void attack() override
	{
		std::cout << "ninja attack";
	}
	//Health = 2;
};

class knight : public Enemy
{

};

class archer : public Enemy
{

};

class wizzard : public Enemy
{

};