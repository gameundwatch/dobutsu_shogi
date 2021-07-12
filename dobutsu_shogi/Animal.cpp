#include "Animal.h"

Animal::Animal() {
	name = '0';
	isPlayer = false;
	selected = false;
}

Animal::Animal(char _name, bool _player) {
	name = _name;
	isPlayer = _player;
	selected = false;
}

void Animal::setPos(int _x, int _y) {

}

void Animal::setSelect(bool _b) {
	selected = _b;
}

char Animal::GetName() {
	return name;
}

bool Animal::GetPlayer() {
	return isPlayer;
}

bool Animal::isSelected() {
	return selected;
}

void Animal::Operation() {

}