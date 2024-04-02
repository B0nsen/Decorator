#include <iostream>

class Human
{
public:
	Human()
	{

	}
	virtual int GetDamage()
	{
		return 20;
	}
	virtual int GetSpeed()
	{
		return 20;
	}
	virtual int GetHealth()
	{
		return 150;
	}
	virtual int GetDefence()
	{
		return 0;
	}
	void Show()
	{
		std::cout << "Damage: " << GetDamage()
			<< "\nSpeed: " << GetSpeed()
			<< "\nHealth: " << GetHealth()
			<< "\nDefence: " << GetDefence() << '\n';
	}
};

class Warrior : public Human
{
protected:
	Human* human;
public:
	Warrior()
	{
	}
	Warrior(Human* human)
	{
		this->human = human;
	}
	int GetDamage()
	{
		return this->human->GetDamage() + 20;
		std::cout << this->human->GetDamage() + 20;
	}
	int GetSpeed()
	{
		return this->human->GetSpeed() + 10;
	}
	int GetHealth()
	{
		return this->human->GetHealth() + 50;
	}
	int GetDefence()
	{
		return this->human->GetDefence() + 20;
	}
};

class Swordsman : public Warrior
{
protected:
	Warrior* warrior;
public:
	Swordsman() {

	}
	Swordsman(Warrior* human)
	{
		this->warrior = human;
	}
	int GetDamage()
	{
		return this->warrior->GetDamage() + 40;
	}
	int GetSpeed()
	{
		return this->warrior->GetSpeed() - 10;
	}
	int GetHealth()
	{
		return this->warrior->GetHealth() + 50;
	}
	int GetDefence()
	{
		return this->warrior->GetDefence() + 40;
	}
};

class Archer : public Warrior
{
protected:
	Warrior* human;
public:
	Archer()
	{

	}
	Archer(Warrior* human)
	{
		this->human = human;
	}
	int GetDamage()
	{
		return this->human->GetDamage() + 20;
	}
	int GetSpeed()
	{
		return this->human->GetSpeed() + 20;
	}
	int GetHealth()
	{
		return this->human->GetHealth() + 50;
	}
	int GetDefence()
	{
		return this->human->GetDefence() + 10;
	}
};

class Horseman : public Swordsman
{
protected:
	Human* human;
public:
	Horseman()
	{

	}
	Horseman(Human* human)
	{
		this->human = human;
	}
	int GetDamage()
	{
		return this->human->GetDamage() - 10;
	}
	int GetSpeed()
	{
		return this->human->GetSpeed() + 40;
	}
	int GetHealth()
	{
		return this->human->GetHealth() + 200;
	}
	int GetDefence()
	{
		return this->human->GetDefence() + 100;
	}
};

class Elph
{
public:
	Elph()
	{

	}
	virtual int GetDamage()
	{
		return 15;
	}
	virtual int GetSpeed()
	{
		return 30;
	}
	virtual int GetHealth()
	{
		return 100;
	}
	virtual int GetDefence()
	{
		return 0;
	}
	void Show()
	{
		std::cout << "Damage: " << GetDamage()
			<< "\nSpeed: " << GetSpeed()
			<< "\nHealth: " << GetHealth()
			<< "\nDefence: " << GetDefence() << '\n';
	}
};

class WarriorElph : public Elph
{
protected:
	Elph* elph;
public:
	WarriorElph()
	{

	}
	WarriorElph(Elph* elph)
	{
		this->elph = elph;
	}
	int GetDamage()
	{
		return elph->GetDamage() + 20;
	}
	int GetSpeed()
	{
		return elph->GetSpeed() - 10;
	}
	int GetHealth()
	{
		return elph->GetHealth() + 100;
	}
	int GetDefence()
	{
		return elph->GetDefence() + 20;
	}
};

class MageElph : public Elph
{
protected:
	Elph* elph;
public:
	MageElph()
	{

	}
	MageElph(Elph* elph)
	{
		this->elph = elph;
	}
	int GetDamage()
	{
		return elph->GetDamage() + 10;
	}
	int GetSpeed()
	{
		return elph->GetSpeed() + 10;
	}
	int GetHealth()
	{
		return elph->GetHealth() - 50;
	}
	int GetDefence()
	{
		return elph->GetDefence() + 10;
	}
};

class Crossbower : public WarriorElph
{
public:
	Crossbower()
	{

	}
	Crossbower(Elph* elph)
	{
		this->elph = elph;
	}
	int GetDamage()
	{
		return elph->GetDamage() + 20;
	}
	int GetSpeed()
	{
		return elph->GetSpeed() + 10;
	}
	int GetHealth()
	{
		return elph->GetHealth() + 50;
	}
	int GetDefence()
	{
		return elph->GetDefence() - 10;
	}
};

class EvilMage : public MageElph
{
public:
	EvilMage()
	{

	}
	EvilMage(Elph* elph)
	{
		this->elph = elph;
	}
	int GetDamage()
	{
		return elph->GetDamage() + 70;
	}
	int GetSpeed()
	{
		return elph->GetSpeed() + 20;
	}
	int GetHealth()
	{
		return elph->GetHealth() + 0;
	}
	int GetDefence()
	{
		return elph->GetDefence() + 0;
	}
};

class GoodMage : public MageElph
{
public:
	GoodMage()
	{

	}
	GoodMage(Elph* elph)
	{
		this->elph = elph;
	}
	int GetDamage()
	{
		return elph->GetDamage() + 50;
	}
	int GetSpeed()
	{
		return elph->GetSpeed() + 30;
	}
	int GetHealth()
	{
		return elph->GetHealth() + 100;
	}
	int GetDefence()
	{
		return elph->GetDefence() + 30;
	}
};

void ShowStatsHuman(Human* character)
{

}

void ShowStatsElph(Elph* character)
{
	std::cout << "Damage: " << character->GetDamage()
		<< "\nSpeed: " << character->GetSpeed()
		<< "\nHealth: " << character->GetHealth()
		<< "\nDefence: " << character->GetDefence() << '\n';
}

int main()
{
	std::cout << "Choose class Human or Elph: ";
	std::string name;
	std::cin >> name;
	if (name == "Human")
	{
		Human* character = new Human();
		character->Show();
		std::cout << "Do you want to promote to Warrior?";
		std::cin >> name;
		if (name == "Yes")
		{
			character = new Warrior(character);
			character->Show();
			std::cout << "Do you want to promote to Archer or Swordsman: ";
			std::cin >> name;
			if (name == "Archer")
			{
				character = new Archer((Warrior*)character);
				character->Show();
			}
			else if (name == "Swordsman")
			{
				character = new Swordsman((Warrior*)character);
				character->Show();
				std::cout << "Do you want to promote to Horseman?";
				std::cin >> name;
				if (name == "Yes")
				{
					character = new Horseman((Swordsman*)character);
					character->Show();
				}
			}
			else
			{
				std::cout << "Wrong input";
			}
		}
	}
	else if (name == "Elph")
	{
		Elph* character = new Elph();
		character->Show();
		std::cout << "Do you want to promote to Elph warrior or Elph mage: ";
		std::cin >> name;
		if (name == "Warrior")
		{
			character = new WarriorElph(character);
			character->Show();
			std::cout << "Do you want to promote to Crossbower?";
			std::cin >> name;
			if (name == "Yes")
			{
				character = new Crossbower(character);
				character->Show();
			}
		}
		else if (name == "Mage")
		{
			character = new MageElph(character);
			character->Show();
			std::cout << "Do you want to promote to Evil mage or Good mage: ";
			std::cin >> name;
			if (name == "Evil mage")
			{
				character = new EvilMage(character);
				character->Show();
			}
			else if (name == "Good mage")
			{
				character = new GoodMage(character);
				character->Show();
			}
			else
			{
				std::cout << "Wrong input";
			}
		}
		else
		{
			std::cout << "Wrong input";
		}
	}
	else
	{
		std::cout << "Wrong input";
	}
	
}