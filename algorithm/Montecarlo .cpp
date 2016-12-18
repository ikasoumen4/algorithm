#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "stdafx.h"
#include "Montecarlo.h"

#define n 1000000

/**
* @file ファイル名.h
* @brief 円周率をモンテカルロを用いて求めるプログラムをまとめたソースである。
* @author 私
* @date 2016/12/15
*/

/**
* @fn
* モンテカルロ法とは、シミュレーションや数値計算を乱数を用いて行う手法である。
* 誤答する確率の上界が与えられる乱択アルゴリズムと定義される。
* モンテカルロを利用できる問題
* - 機械学習
* @brief 円周率をモンテカルロを用いて求めるプログラムである。
* @param (引数名) なし
* @param (引数名) 引数の説明
* @return 戻り値の説明
* @sa 参照すべき関数を書けばリンクが貼れる
* @detail 詳細な説明
* @author 私
* @date 2016/12/15
*/
int MontecarloSimulationPai()
{
	printf("円周率をシミュレーションします。\n");
	double x, y, pai;
	double r;
	int i;
	int a = 0;

	for (i = 0; i < n; i++) {
		x = rnd();
		y = rnd();

		//原点0を中心とする半径 r の円の方程式である。rは2乗するが、1が最大なので2乗する必要がない？
		//x = 1 y = 0 から　x = 0 Y = 1 が円の中であるとみなせる。
		//中心の点（0,0)とする円周上(x,y)の点を持つ円の半径は3平方の定理（円の方程式？）により以下の式で求まる。
		r = (x - 0)*(x - 0) + (y - 0)*(y - 0);


		if (r <= 1)  a++;
		//
	}

	pai = (double)4 * a / n;
	printf("%f\n", pai);
	return 0;
}


double rnd(void) {
	//rand関数は0からRAND_MACの範囲の整数をランダムで出力する。
	//RAND_MAX = 0x7fff 16*16*16*7 = 28672??

	//srand((unsigned)time(NULL));			//rand関数が出力する乱数列は同じだが、時間をシードとすることで違った乱数列を出力できる？
	return (double)rand() / (RAND_MAX + 0.1);		//rand関数はRAND_MAXを出力するため、RAND_MAXで割れば、最大1の乱数を得られる？　0.1の意味は？
	//return (int) (rand() * 51 * 2) intは小数点を切り捨てする。50を求めるには、51とする。100とするには、それを2倍する。
}
