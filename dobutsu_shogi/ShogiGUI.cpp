
#include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include <vector>

#include "ShogiGUI.h"
#include "Animal.h"

void ShogiGUI::write3x4Board() {
	Rect(Arg::center(400, 300),310,410).draw(Palette::Orange);
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			Rect(255 + i*100, 105 + j*100, 90 ).draw(Palette::White);
		}
	}
}

void ShogiGUI::CreateAnimalTextures() {
	TextureAsset::Register(U"Lion"    , Emoji(U"🦁"));
	TextureAsset::Register(U"Elephant", Emoji(U"🐘"));
	TextureAsset::Register(U"Horse"   , Emoji(U"🐎"));
	TextureAsset::Register(U"Hiyoko"  , Emoji(U"🐤"));
	TextureAsset::Register(U"Niwatori", Emoji(U"🐔"));
}

void ShogiGUI::writeAnimals(std::vector<std::vector<Animal>> board) {

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (board[j][i].GetPlayer() == true)
			{
				switch (board[j][i].GetName()) {
				case 'L':
					TextureAsset(U"Lion").resized(80).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'E':
					TextureAsset(U"Elephant").resized(80).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'U':
					TextureAsset(U"Horse").resized(80).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'H':
					TextureAsset(U"Hiyoko").resized(80).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'N':
					TextureAsset(U"Niwatori").resized(80).drawAt(300 + i * 100, 150 + j * 100);
					break;
				default:
					break;
				}
			}
			else
			{
				switch (board[j][i].GetName()) {
				case 'L':
					TextureAsset(U"Lion").resized(80).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'E':
					TextureAsset(U"Elephant").resized(80).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'U':
					TextureAsset(U"Horse").resized(80).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'H':
					TextureAsset(U"Hiyoko").resized(80).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'N':
					TextureAsset(U"Niwatori").resized(80).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				default:
					break;
				}
			}
		}
	}

}

