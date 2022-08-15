#pragma once
class Enemy
{
public:
	Enemy();
protected:
	int b;

	void virtual print();
};

class kaka : public Enemy
{
public:
	int Age;
	kaka(int age) : Age(age){};
	void print(int x);
};