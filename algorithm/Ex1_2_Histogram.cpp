#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include "Ex1_2_Histogram.h"

/**
* @fn
* 度数分布
* 統計において標本として得たある変量の値のリストである。
* 量の大小の順で並べ、各数値が現れた個数を表示する表（度数分布表）で示す。
* 使用例
* あるアンケートを5段階のリッカート尺度で回答し、その回答群を度数分布で示す。
* 階級　　　　　　　　　　　回答数
* 1.全く同意できない　　　　3
* 2.同意できない　　　　　　9
* 3.どちらともいえない　　　12
* 4.同意できる　　　　　　　33
* 5.非常に同意できる　　　　9
**
@brief 各ランクのヒストグラムを求める
* @param (引数名) なし
* @param (引数名) 引数の説明
* @return 戻り値の説明
* @sa 参照すべき関数を書けばリンクが貼れる
* @detail 詳細な説明
* @author 私
* @date 2016/12/15
*/

void Histogram() {

	int i;
	int rank;
	int histo[11];
	int count = 1;

	printf("100までの乱数を生成\n");
	while (true) {
		i = RandomInt();
		printf("%d\n", i);
		if (i == 100)break;
		count++;
	}

	int* a = (int*)malloc(sizeof(int) * count);
	for (i = 0; i < count; i++) a[i] = RandomInt();

	for (i = 0; i < 11; i++)histo[i] = 0;

	for (i = 0; i < count; i++) {
		rank = a[i] / 10;
		if (0 <= rank && rank <= 10) {
			histo[rank]++;
		}
	}
	
	free(a);

	for (i = 0; i <= 10; i++) {
		printf("%3d - : %3d\n", i * 10, histo[i]);
	}
}

int RandomInt() {
	return (int)(rand() % 101);
}