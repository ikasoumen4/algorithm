// pai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

#define n 100000

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
		r = x*x + y*y;
		//���_0�𒆐S�Ƃ��锼�a r �̉~�̕������ł���Br��2�悷�邪�A1���ő�Ȃ̂�2�悷��K�v���Ȃ��H
		//x = 1 y = 0 ����@x = 0 Y = 1 ���~�̒��ł���Ƃ݂Ȃ���B

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