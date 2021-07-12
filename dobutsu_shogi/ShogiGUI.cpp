
#include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include <vector>

#include "ShogiGUI.h"
#include "Animal.h"

void ShogiGUI::write3x4Board() {
	Rect(Arg::center(400, 300),310,410).draw(Palette::Orange);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
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

void ShogiGUI::Operation(std::vector<std::vector<Animal>> board) {

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			if (board[j][i].GetName() != '0') {
				//コマがある場合
				if (board[j][i].GetPlayer() == true)
				{
					// コマがプレイヤーの場合
					Circle Base_PL( Vec2(300 + i * 100, 150 + j * 100), 40);
					// 移動範囲
					Rect MoveRange_PL(Arg::center(300 + i * 100, 150 + (j - 1) * 100), 40);

					// コマ非選択
					if (!board[j][i].isSelected())
					{
						Base_PL.draw(Palette::Darkgreen);
						// 左クリック
						if (Base_PL.leftClicked())
						{
							board[j][i].setSelect(true);
						}
					}
					else
					{
						// コマ選択中
						Base_PL.draw(Palette::Forestgreen);
						MoveRange_PL.draw(Palette::Lightgreen); //表示

						if (Base_PL.leftClicked())
						{
							board[j][i].setSelect(false); // コマ選択解除
						}
					}

				}
				else
				{
					//コマがプレイヤーでない場合
					// Circle Base_OP(Vec2(300 + i * 100, 150 + j * 100), 40);
					// Base_OP.draw(Base_OP.leftPressed() ? Palette::Red : Palette::Darkred);
				}
			}
		}
	}
}

void ShogiGUI::writeAnimals(std::vector<std::vector<Animal>> board) {

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			if (board[j][i].GetPlayer() == true)
			{
				switch (board[j][i].GetName()) {
				case 'L':
					TextureAsset(U"Lion").resized(50).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'E':
					TextureAsset(U"Elephant").resized(50).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'U':
					TextureAsset(U"Horse").resized(50).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'H':
					TextureAsset(U"Hiyoko").resized(50).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'N':
					TextureAsset(U"Niwatori").resized(50).drawAt(300 + i * 100, 150 + j * 100);
					break;
				default:
					break;
				}
			}
			else
			{
				switch (board[j][i].GetName()) {
				case 'L':
					TextureAsset(U"Lion").resized(50).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'E':
					TextureAsset(U"Elephant").resized(50).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'U':
					TextureAsset(U"Horse").resized(50).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'H':
					TextureAsset(U"Hiyoko").resized(50).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				case 'N':
					TextureAsset(U"Niwatori").resized(50).rotated(180_deg).drawAt(300 + i * 100, 150 + j * 100);
					break;
				default:
					break;
				}
			}
		}
	}

}



