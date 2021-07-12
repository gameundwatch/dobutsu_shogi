
#pragma once

#include "Animal.h"

class ShogiGUI
{
	
private:

public:
	void CreateAnimalTextures();
	void write3x4Board();
	void Operation(std::vector<std::vector<Animal>> board);
	void writeAnimals(std::vector<std::vector<Animal>> board);
};


