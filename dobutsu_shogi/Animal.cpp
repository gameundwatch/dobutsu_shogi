#include "Animal.h"

Animal::Animal() {
	name = '0';
	isPlayer = false;
}

Animal::Animal(char _name, bool _player) {
	name = _name;
	isPlayer = _player;
}

void Animal::setPos(int x, int y) {

}

char Animal::GetName() {
	return name;
}

bool Animal::GetPlayer() {
	return isPlayer;
}