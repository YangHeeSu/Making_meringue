#include<iostream>
#include<conio.h>
#include<windows.h>
#include "funcH.h"

//鏽楝 鼻熱
#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15

void ending_screen(int a, int b, int c) {
	cout << "\n" << endl;

	if (a == 4 && b == 50 && c == 5) {
		cout << "    ≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << endl;
		cout << "    ≠                              ≠" << endl;
		cout << "    ≠    �粉騔� 該楨瓔酈 諫撩!     ≠" << endl;
		cout << "    ≠                              ≠" << endl;
		cout << "    ≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << endl;
		cout << "\n" << endl;
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                          *                      *   弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                        *            弛" << endl;
		cout << "   弛          *                    *                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛     *                    ^                          弛" << endl;
		cout << "   弛                    (  ( 弛 )  )                      弛" << endl;
		cout << "   弛                 (   (   弛   )   )                   弛" << endl;
		cout << "   弛              ㄗ___(_____弛_____)___)                 弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                          *          弛" << endl;
		cout << "   弛   *                                                 弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
		cout << "\n" << endl;
		cout << "    萃檜 詳棻 ж釭 避橫紫 賅蒂 薑紫煎 蛻氈朝 該楨瓔酈!" << endl << endl;
		cout << "    渡褐擎 �К〥� 蹂葬餌殮棲棻!" << endl;
	}
	else if (a == 0 && b == 0 && c < 3) {
		cout << "    ≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << endl;
		cout << "    ≠                              ≠" << endl;
		cout << "    ≠  營餌辨 旎雖 рわ晦僭 諫撩!  ≠" << endl;
		cout << "    ≠                              ≠" << endl;
		cout << "    ≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << endl;
		cout << "\n" << endl;
		cout << "\t       X           X" << endl;
		cout << "\t         X       X" << endl;
		cout << "\t           X   X" << endl;
		cout << "\t             X" << endl;
		cout << "\t             X" << endl;
		cout << "\t           X   X" << endl;
		cout << "\t         X       X" << endl;
		cout << "\t       X           X" << endl;
		cout << "\n" << endl;
		cout << "    蹂葬蒂 ж楊渦棲 噙溯晦蒂 儅撩п頂樟啻蹂!" << endl << endl;
		cout << "    斜傖 蹂葬蒂 寰ж朝 ら檜 謠擊 匙 偽蝗棲棻!" << endl << endl;
	}
	else if (a == 1 && b == 6 && c == 2) {
		cout << "    Ⅱ 敝罹遴 �鬄鐿^ 諫撩! ９\n" << endl << endl;
		cout << "    �鬄鶺� 儅橾擎,,, 2001喇 6錯 2橾!" << endl << endl;
		cout << "    薯 儅橾擊 蜃蹺樟啻蹂^^ 蹴ж萄董棲棻^^" << endl << endl;
	}
	else if (a == 4 && b == 0 && c < 3) {
		cout << "    Ⅱ 蛻虜 氈朝 該楨 瓔酈 諫撩! ９\n" << endl << endl;
		cout << "    賅曄紫 滌煎, 睡萄毀雖紫 彊雖虜..." << endl << endl;
		cout << "    營猿朝 薯渠煎 厥橫憮 斜楛雖 蛻氈蝗棲棻." << endl << endl;
	}
	else if (a == 0 && b >= 50 && c < 3) {
		cout << "    Ⅱ 睡萄楝遴 該楨瓔酈 諫撩! ９\n" << endl << endl;
		cout << "    賅曄紫 滌煎, 蛻紫 滌煎雖虜..." << endl << endl;
		cout << "    號檜 摩橫憮 睡萄毀蝗棲棻." << endl << endl;
	}
	else if (a == 0 && b == 0 && c == 5) {
		cout << "    Ⅱ 賅曄虜 蕨雌 該楨 瓔酈 諫撩! ９\n" << endl << endl;
		cout << "    賅曄紫 滌煎, 睡萄毀雖紫 彊堅..." << endl << endl;
		cout << "    澀 瞼憮 賅曄虜 蕨雌 該楨 瓔酈 殮棲棻." << endl << endl;
	}
	else {
		cout << "    Ⅱ 該楨 瓔酈 諫撩! ９\n" << endl << endl;
		cout << "    鼠陪ж啪 蛻氈朝 該楨 瓔酈殮棲棻." << endl << endl;
	}

	cout << endl << endl;
	getchar();
}

void start(int& stage_num) {
	while (true) {
		cout << "\n\n\n" << endl;
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl; Sleep(100);
		cout << "   弛                                          弛" << endl; Sleep(100);
		cout << "   弛             該楨 瓔酈 虜菟晦             弛" << endl; Sleep(100);
		cout << "   弛                                          弛" << endl; Sleep(100);
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl; Sleep(100);

		cout << "\n\n" << endl;
		cout << "         1) 衛濛ж晦" << endl;
		cout << "         2) 啪歜寞徹" << endl;
		cout << "         3) 部頂晦" << endl;
		cout << "\n";

		while (true) {

			int key = _getch();

			if (key == 49) { //1擊 揚毓擊 陽
				Sleep(100);
				return;
			}
			else if (key == 50) { //2蒂 揚毓擊 陽
				guide(); //陛檜萄煎 剩橫馬
				break;
			}
			else if (key == 51) { //3擊 揚毓擊 陽
				cout << "啪歜 謙猿" << endl;
				Sleep(500);
				exit(0); //啪歜檜 謙猿脾
			}
		}
	}


	system("cls");
}

void guide() {
	int page_num = 1;

	while (true) { //啗樓 奩犒

		system("cls");

		cout << "\n\n\n" << endl;
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl; Sleep(100);
		cout << "   弛                                          弛" << endl; Sleep(100);
		cout << "   弛                啪歜 寞徹                 弛" << endl; Sleep(100);
		cout << "   弛                                          弛" << endl; Sleep(100);
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl; Sleep(100);
		cout << "\n\n";

		cout << "   Stage " << page_num << " 撲貲" << endl << endl;

		switch (page_num) { //page_num縑 評塭 轎溘腎朝 匙檜 殖塭颶
		case 1:
			cout << "   該楨瓔酈蒂 虜菟晦 嬪п憮 營猿陛 в蹂ж棻!" << endl << endl;
			cout << "   營猿 葬蝶お蒂 諼錶憮, 牖憮渠煎 營猿蒂 蜃醮爾濠." << endl << endl;
			cout << "   營猿陛 ж釭塭紫 ぎ葬賊 fail..壬壬" << endl << endl;
			cout << "   澀 晦橘п憮 蜃醮爾濠!" << endl << endl;
			cout << "\n\t\t８  Ⅱ\n" << endl;
			break;
		case 2:
			cout << "   該楨瓔酈蒂 虜菟晦 嬪п憮 奩避擊 摩橫撿 и棻." << endl << endl;
			cout << "   蝶む檜蝶酈蒂 翱顫п憮 奩避擊 錳ж朝 虜躑 摩橫爾濠!" << endl << endl;
			cout << "   ☆蝶む檜蝶 3廓 渡 => �蛻� 1廓 ★戲煎 獄棻." << endl << endl;
			cout << "   號檜 摩擊 熱煙 詣霞 濛ヶ檜 虜菟橫霞棻堅 ж朝等...?" << endl << endl;
			cout << "\n\t\t９  Ⅱ\n" << endl;
			break;
		case 3:
			cout << "   該楨瓔酈蒂 虜菟晦 嬪п憮 穢輿該棲煎 瞼撿 и棻." << endl << endl;
			cout << "   虞渠晦 儀 氈朝 睡碟縑 蜃醮 蝶む檜蝶夥蒂 揚楝爾濠." << endl << endl;
			cout << "   薑�旅� 瞼雖 彊戲賊 偎熱煎 藥輿雖 彊朝棻." << endl << endl;
			cout << "   5廓 寰縑 3廓擊 撩奢衛酈雖 彊戲賊 褒ぬ!" << endl << endl;
			cout << "\n\t\t９  Ⅰ\n" << endl;
			break;
		}
		cout << "   (x酈蒂 援腦賊 給嬴骨棲棻)" << endl;


		while (true) {

			int key = _getch();

			if (key == (int)'x' || key == (int)'X') { //虜擒 x蒂 援腦賊
				system("cls"); //�飛橉� 瞪睡 餉薯腎堅
				return; //葬欐 脾
			}

			else if (key == 224) { //寞щ酈 殮溘
				key = _getch();
				if (key == 75 && page_num == 2 || key == 75 && page_num == 3) { // 2, 3む檜雖縑憮 豭薹 酈蒂 揚毓擊 陽
					page_num--; //檜瞪 む檜雖煎
				}
				else if (key == 77 && page_num == 1 || key == 77 && page_num == 2) { // 1, 2む檜雖縑憮 螃艇薹 酈蒂 揚毓擊 陽
					page_num++; //棻擠 む檜雖煎
				}
				else if (key == 75 && page_num == 1) { //1む檜雖縑憮 豭薹 幗が擊 揚毓擊 陽 む檜雖 3戲煎 馬
					page_num = 3;
				}
				else { //3む檜雖縑憮 螃艇薹 幗が擊 揚毓擊 陽 む檜雖 1煎 馬
					page_num = 1;
				}
				break;
			}
			else {
				continue;
			}
		}
	}
}

void start_count(int& stage_num) {
	system("cls");
	for (int i = 3; i >= 0; i--) {

		switch (i) { //i縑 評塭 轎溘腎朝 檜嘐雖陛 殖塭颶
		case 0:
			cout << "\n\n\n\n" << endl;
			Sleep(300);
			cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          弛      蝶纔檜雖 " << stage_num << "    弛" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
			Sleep(600);
			system("cls");
			cout << "\n\n\n\n" << endl;
			cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          弛     啪歜 衛濛~!    弛" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
			Sleep(300);
			return;
		default:
			cout << "\n\n\n\n" << endl;
			Sleep(200);
			cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          弛          " << i << "         弛" << endl;
			cout << "          弛                    弛" << endl;
			cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
			Sleep(200);
			system("cls");
		}
	}
	stage_num++;
}

void stage_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          弛       啪歜 部!     弛" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(800);
	system("cls");
}

void game_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	Sleep(1000);
	cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          弛     該楨 掄朝 醞   弛" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(1000);
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          弛     棻 掘錫橫蹂!   弛" << endl;
	cout << "          弛                    弛" << endl;
	cout << "          戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(2000);
	system("cls");
}

void stage1(int& stage_score, int& stage_num) {
	bool T_or_F[4];
	int t_num = 0;
	int key;

	start_count(stage_num);
	system("cls");

	list();
	Sleep(500);
	system("cls");

	for (int i = 0; i<4; i++) {
		cout << "\n\n" << i + 1 << "廓簞 營猿朝?" << endl;
		if (i == 0) {
			cout << "\n\n" << endl;
			cout << "  Ⅱ 1廓 啗塢 喻艇濠" << endl;
			cout << "  Ⅱ 2廓 穢輿該棲" << endl;
			cout << "  Ⅱ 3廓 獐" << endl;
			cout << "  Ⅱ 4廓 撲鰻" << endl;

			while (true) {
				key = _getch();
				if (key == 52) {
					textcolor(GREEN, BLACK);
					cout << "\n薑港!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nぎ葡!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 1) {
			cout << "\n\n" << endl;
			cout << "  Ⅱ 1廓 溯跨闆" << endl;
			cout << "  Ⅱ 2廓 啗塢 �聸�" << endl;
			cout << "  Ⅱ 3廓 穢輿該棲" << endl;
			cout << "  Ⅱ 4廓 啗塢 喻艇濠" << endl;

			while (true) {
				key = _getch();
				if (key == 50) {
					textcolor(GREEN, BLACK);
					cout << "\n薑港!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nぎ葡!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 2) {
			cout << "\n\n" << endl;
			cout << "  Ⅱ 1廓 溯跨闆" << endl;
			cout << "  Ⅱ 2廓 檣鳴闆" << endl;
			cout << "  Ⅱ 3廓 塭歜闆" << endl;
			cout << "  Ⅱ 4廓 螢葬粽" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\n薑港!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nぎ葡!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else {
			cout << "\n\n" << endl;
			cout << "  Ⅱ 1廓 繭翱儀模" << endl;
			cout << "  Ⅱ 2廓 檣奢儀模" << endl;
			cout << "  Ⅱ 3廓 獐" << endl;
			cout << "  Ⅱ 4廓 穢輿該棲" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\n薑港!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nぎ葡!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		textcolor(WHITE, BLACK);
		Sleep(1000);
		system("cls");
	}

	for (int j = 0; j < 4; j++) {
		if (T_or_F[j] == true) t_num++;
	}

	stage_score = t_num;
	stage_num++;
	stage_end();
}

void stage2(int& stage_score, int& stage_num) {
	int num = 0, key = 0;

	start_count(stage_num);
	system("cls");

	while (true) {

		cout << "\n\n\n(棻 ц戲賊 x 贗葛!)" << endl;

		if (num / 3 > 50) {
			textcolor(YELLOW, BLACK);
		}
		else if (num / 3 == 50) {
			textcolor(GREEN, BLACK);
		}
		else if (num / 3 >= 40) {
			textcolor(LIGHTMAGENTA, BLACK);
		}
		else if (num / 3 >= 30) {
			textcolor(RED, BLACK);
		}

		cout << "�蛻� 熱 : " << num / 3 << endl;

		textcolor(WHITE, BLACK);

		blending(num % 3);


		while (true) {
			key = _getch();
			if (key == VK_SPACE) { //蝶む檜蝶夥蒂 援腦賊 blending曖 斜葡檜 夥莘
				num++;
				system("cls");
				break;
			}
			else if (key == 'x' || key == 'X') { //x蒂 援腦賊 棻擠 蝶纔檜雖煎 剩橫馬
				stage_end();
				stage_score = num / 3;
				stage_num++;
				return;
			}
		}
	}
}

void stage3(int& stage_score, int& stage_num) {
	int score = 0, side = 10, key, num = 5;
	bool s = false;

	start_count(stage_num);

	while (true) {
		cout << "\n陴擎 �蝦� : " << num << endl;
		cout << "撩奢 �蝦� : " << score << endl << endl;
		cout << "         ﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤" << endl;
		gotoxy(side, 7); //裔 籀擠 啻賅 10,6    裔 部 50,6      陛遴等 29~31,6
		cout << "∼";
		cout << endl << endl << endl;

		switch (side) {
		case 10: s = false; break; //豭薹 裔 部縑 棻棻腦賊 s蒂 false煎 夥紱橫邀
		case 50: s = true; break; //螃艇薹 裔 部縑 棻棻腦賊 s蒂 true煎 夥紱橫邀
		}

		if (side >= 10 || side <= 50) {
			if (s == false) side++; //螃艇薹戲煎 檜翕
			else side--; //豭薹戲煎 檜翕
		}

		if (_kbhit()) {
			key = _getch();
			if (key == VK_SPACE) {
				num--;
				if (side == 29 || side == 30 || side == 31) { //size陛 29~31檜賊 撩奢戲煎 っ欽
					score++;
					squeeze(true); //該楨擊 瞼朝 等 撩奢и 斜葡 轎溘
					textcolor(GREEN, BLACK);
					cout << "\n撩奢!" << endl;
					textcolor(WHITE, BLACK);
					Sleep(500);
				}
			}
		}
		else {
			squeeze(false); //該楨擊 瞼朝 等 褒ぬи 斜葡 轎溘
		}

		if (num == 0) break;

		system("cls");
	}

	stage_score = score;
	stage_end();
	game_end();
}

void blending(int num) {
	cout << "\n";

	if (num == 0) {
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛           _                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛          弛弛                                         弛" << endl;
		cout << "   弛         忙  忖                                        弛" << endl;
		cout << "   弛         弛  弛                                        弛" << endl;
		cout << "   弛     式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式      弛" << endl;
		cout << "   弛     ′                                       ㄞ     弛" << endl;
		cout << "   弛       ′                                    ㄞ      弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	}
	else if (num == 1) {
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                          _                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                         弛弛                          弛" << endl;
		cout << "   弛                        忙  忖                         弛" << endl;
		cout << "   弛                        弛  弛                         弛" << endl;
		cout << "   弛     式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式      弛" << endl;
		cout << "   弛     ′                                       ㄞ     弛" << endl;
		cout << "   弛       ′                                    ㄞ      弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	}
	else {
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                          _          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                         弛弛          弛" << endl;
		cout << "   弛                                        忙  忖         弛" << endl;
		cout << "   弛                                        弛  弛         弛" << endl;
		cout << "   弛     式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式      弛" << endl;
		cout << "   弛     ′                                       ㄞ     弛" << endl;
		cout << "   弛       ′                                    ㄞ      弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	}
}

void squeeze(bool ft) {
	if (ft == false) {
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                 ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥                弛" << endl;
		cout << "   弛                   ﹥﹥﹥﹥﹥﹥﹥﹥                  弛" << endl;
		cout << "   弛                    ﹥﹥﹥﹥﹥﹥﹥                   弛" << endl;
		cout << "   弛                     ﹥﹥﹥﹥﹥﹥                    弛" << endl;
		cout << "   弛                      ﹥﹥﹥﹥﹥                     弛" << endl;
		cout << "   弛                        ﹤﹤﹤                       弛" << endl;
		cout << "   弛                        ﹤﹤﹤                       弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	}
	else {
		cout << "   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "   弛                 ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥                弛" << endl;
		cout << "   弛                   ﹥﹥﹥﹥﹥﹥﹥﹥                  弛" << endl;
		cout << "   弛                    ﹥﹥﹥﹥﹥﹥﹥                   弛" << endl;
		cout << "   弛                     ﹥﹥﹥﹥﹥﹥                    弛" << endl;
		cout << "   弛                      ﹥﹥﹥﹥﹥                     弛" << endl;
		cout << "   弛                        ﹤﹤﹤                       弛" << endl;
		cout << "   弛                        ﹤﹤﹤                       弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   弛                           ^                         弛" << endl;
		cout << "   弛                     (  ( 弛 )  )                     弛" << endl;
		cout << "   弛                  (   (   弛   )   )                  弛" << endl;
		cout << "   弛               ㄗ___(_____弛_____)___)                弛" << endl;
		cout << "   弛                                                     弛" << endl;
		cout << "   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	}

}

void list() {
	cout << "\n\n\n" << endl;
	cout << "        忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "        弛                               弛" << endl;
	cout << "        弛                               弛" << endl;
	cout << "        弛          в蹂и 營猿          弛" << endl;
	cout << "        弛                               弛" << endl;
	cout << "        弛     1. 撲鰻                   弛" << endl;
	cout << "        弛     2. 啗塢 �聸�              弛" << endl;
	cout << "        弛     3. 溯跨闆                 弛" << endl;
	cout << "        弛     4. 繭翱儀模               弛" << endl;
	cout << "        弛                               弛" << endl;
	cout << "        弛                               弛" << endl;
	cout << "        戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
}

void textcolor(int foreground, int background) { //text 儀梃擊 夥紱啪 п輿朝 л熱
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y) //夔樂縑憮 錳ж朝 夠縑 轎溘ж啪 п輿朝 л熱

{

	COORD Pos = { (short)x - 1, (short)y - 1 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}