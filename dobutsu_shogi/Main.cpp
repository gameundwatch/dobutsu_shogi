
#include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include <vector>

#include "ShogiGUI.h"
#include "Animal.h"

void Main()
{

	ShogiGUI sGUI;
	sGUI.CreateAnimalTextures();

	std::vector<std::vector<Animal>> board(4, std::vector<Animal> (3, Animal()));

	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	while (System::Update())
	{

		// GUI
		sGUI.write3x4Board();
		sGUI.Operation(board);
		// sGUI.writeAnimals(board);

		//wait

		// [A] キーが押されたら
		if (KeyA.down())
		{
			// Hello とデバッグ表示する
			Print << U"Hello!";
		}

		if (SimpleGUI::Button(U"Reset", Vec2(720, 20))) {
			board[0][0] = Animal('U', false);
			board[0][1] = Animal('L', false);
			board[0][2] = Animal('E', false);
			board[1][1] = Animal('H', false);

			board[3][2] = Animal('U', true);
			board[3][1] = Animal('L', true);
			board[3][0] = Animal('E', true);
			board[2][1] = Animal('H', true);
		}

	}

}

//
// = アドバイス =
// Debug ビルドではプログラムの最適化がオフになります。
// 実行速度が遅いと感じた場合は Release ビルドを試しましょう。
// アプリをリリースするときにも、Release ビルドにするのを忘れないように！
//
// 思ったように動作しない場合は「デバッグの開始」でプログラムを実行すると、
// 出力ウィンドウに詳細なログが表示されるので、エラーの原因を見つけやすくなります。
//
// = お役立ちリンク =
//
// OpenSiv3D リファレンス
// https://siv3d.github.io/ja-jp/
//
// チュートリアル
// https://siv3d.github.io/ja-jp/tutorial/basic/
//
// よくある間違い
// https://siv3d.github.io/ja-jp/articles/mistakes/
//
// サポートについて
// https://siv3d.github.io/ja-jp/support/support/
//
// Siv3D ユーザコミュニティ Slack への参加
// https://siv3d.github.io/ja-jp/community/community/
//
// 新機能の提案やバグの報告
// https://github.com/Siv3D/OpenSiv3D/issues
//
