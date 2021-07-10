#pragma once
class Animal
{	
	private:
		bool isPlayer;
		char name; // L,E,K,H,N,0

	public:
		Animal();
		Animal(char animal, bool player);
		void setPos(int x, int y);

		char GetName();
		bool GetPlayer();
};

