#pragma once
class Enemy
{
public:
	Enemy(int hlth, int dmg, int rnge, int stmn);
private:
	int Health;
	int Damage;
	int Range;
	int Stamina;

protected:

};

class ninja : public Enemy
{
public:
	ninja(int hlth, int dmg, int rnge, int stmn) : Enemy(int hlth, int dmg, int rnge, int stmn);
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