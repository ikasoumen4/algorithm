// pai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

#define n 10000000


double rnd(void);

int main()
{

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
		//
		r = (x - 0)*(x - 0) + (y - 0)*(y - 0);
		
		
		if (r <= 1)  a++;
		//
	}

	pai = (double)4 * a / n;
	printf("%f", pai);
	system("pause");
	return 0;
}

double rnd(void) {
	return (double)rand() / (RAND_MAX + 0.1);
}