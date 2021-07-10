
#pragma once

#include "Animal.h"

class ShogiGUI
{
	
private:

public:
	void CreateAnimalTextures();
	void write3x4Board();
	void writeAnimals(std::vector<std::vector<Animal>> board);
};


