#include "stdafx.h"
#include "TowerOfHanoi.h"


/*
ハノイの塔（バラモンの塔　ルーカスタワーとも呼ばれる。）

3本の杭が左、中、右にある。
中心に穴が開いた円盤がN個ある。
円盤はそれぞれ大きさが異なる。
最初は左側の杭に小さい順で円盤が積まれている。
円盤は一回に一枚ずつどれかの杭に移動することができる。
小さな円盤の上に大きな円盤を乗せることはできない。
全ての円盤を右の杭へ移動する。
*/

#define LEFT 0
#define CENTER 1
#define RIGHT 2

int TowerOfHanoiDo(int disc_count) {

	//int* discs;
	//int i;

	//discs = (int*) malloc(sizeof(int) * disc_count);
	
	//for (i = 0; i < disc_count; i++) discs[i] = 0;
	
	Move(disc_count, "左の杭", "中の杭", "右の杭");

	//free(discs);
	return 0;
}

void Move(int disc_count, char* a, char* b, char* c) {
	if (0 < disc_count) {
		Move(disc_count - 1, a, c, b);
		printf("%d番の円盤を%sから%sに移動\n", disc_count, a, b);
		Move(disc_count - 1, c, b, a);

	}
}
