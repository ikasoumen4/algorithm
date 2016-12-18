#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "stdafx.h"
#include "Montecarlo.h"

#define n 1000000

/**
* @file �t�@�C����.h
* @brief �~�����������e�J������p���ċ��߂�v���O�������܂Ƃ߂��\�[�X�ł���B
* @author ��
* @date 2016/12/15
*/

/**
* @fn
* �����e�J�����@�Ƃ́A�V�~�����[�V�����␔�l�v�Z�𗐐���p���čs����@�ł���B
* �듚����m���̏�E���^�����闐���A���S���Y���ƒ�`�����B
* �����e�J�����𗘗p�ł�����
* - �@�B�w�K
* @brief �~�����������e�J������p���ċ��߂�v���O�����ł���B
* @param (������) �Ȃ�
* @param (������) �����̐���
* @return �߂�l�̐���
* @sa �Q�Ƃ��ׂ��֐��������΃����N���\���
* @detail �ڍׂȐ���
* @author ��
* @date 2016/12/15
*/
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
	//rand�֐���0����RAND_MAC�͈̔͂̐����������_���ŏo�͂���B
	//RAND_MAX = 0x7fff 16*16*16*7 = 28672??

	//srand((unsigned)time(NULL));			//rand�֐����o�͂��闐����͓��������A���Ԃ��V�[�h�Ƃ��邱�Ƃň������������o�͂ł���H
	return (double)rand() / (RAND_MAX + 0.1);		//rand�֐���RAND_MAX���o�͂��邽�߁ARAND_MAX�Ŋ���΁A�ő�1�̗����𓾂���H�@0.1�̈Ӗ��́H
	//return (int) (rand() * 51 * 2) int�͏����_��؂�̂Ă���B50�����߂�ɂ́A51�Ƃ���B100�Ƃ���ɂ́A�����2�{����B
}
