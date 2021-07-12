#pragma once
class Animal
{	
	private:
		bool isPlayer;
		bool selected;
		char name; // L,E,K,H,N,0

	public:
		Animal();
		Animal(char animal, bool player);
		void setPos(int x, int y);
		void setSelect(bool _b);

		char GetName();
		bool GetPlayer();
		bool isSelected();

		void Operation();
};

