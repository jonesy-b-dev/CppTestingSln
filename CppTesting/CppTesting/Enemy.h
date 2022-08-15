#pragma once
class Enemy
{
public:
	Enemy();
private:
	int health;
	int damage;
	int range;
	int stamina;

protected:

};

class ninja : public Enemy
{

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