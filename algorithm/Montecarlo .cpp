#include<stdio.h>
#include<stdlib.h>
#include "stdafx.h"
#include "Montecarlo.h"

#define n 1000000

int MontecarloSimulationPai()
{
	printf("�~�������V�~�����[�V�������܂��B\n");
	double x, y, pai;
	double r;
	int i;
	int a = 0;

	for (i = 0; i < n; i++) {
		x = rnd();
		y = rnd();

		//���_0�𒆐S�Ƃ��锼�a r �̉~�̕������ł���Br��2�悷�邪�A1���ő�Ȃ̂�2�悷��K�v���Ȃ��H
		//x = 1 y = 0 ����@x = 0 Y = 1 ���~�̒��ł���Ƃ݂Ȃ���B
		//���S�̓_�i0,0)�Ƃ���~����(x,y)�̓_�����~�̔��a��3�����̒藝�i�~�̕������H�j�ɂ��ȉ��̎��ŋ��܂�B
		r = (x - 0)*(x - 0) + (y - 0)*(y - 0);


		if (r <= 1)  a++;
		//
	}

	pai = (double)4 * a / n;
	printf("%f\n", pai);
	return 0;
}


double rnd(void) {
	return (double)rand() / (RAND_MAX + 0.1);
}
