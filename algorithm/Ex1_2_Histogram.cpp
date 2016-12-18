#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include "Ex1_2_Histogram.h"

/**
* @fn
* �x�����z
* ���v�ɂ����ĕW�{�Ƃ��ē�������ϗʂ̒l�̃��X�g�ł���B
* �ʂ̑召�̏��ŕ��ׁA�e���l�����ꂽ����\������\�i�x�����z�\�j�Ŏ����B
* �g�p��
* ����A���P�[�g��5�i�K�̃��b�J�[�g�ړx�ŉ񓚂��A���̉񓚌Q��x�����z�Ŏ����B
* �K���@�@�@�@�@�@�@�@�@�@�@�񓚐�
* 1.�S�����ӂł��Ȃ��@�@�@�@3
* 2.���ӂł��Ȃ��@�@�@�@�@�@9
* 3.�ǂ���Ƃ������Ȃ��@�@�@12
* 4.���ӂł���@�@�@�@�@�@�@33
* 5.���ɓ��ӂł���@�@�@�@9
**
@brief �e�����N�̃q�X�g�O���������߂�
* @param (������) �Ȃ�
* @param (������) �����̐���
* @return �߂�l�̐���
* @sa �Q�Ƃ��ׂ��֐��������΃����N���\���
* @detail �ڍׂȐ���
* @author ��
* @date 2016/12/15
*/

void Histogram() {

	int i;
	int rank;
	int histo[11];
	int count = 1;

	printf("100�܂ł̗����𐶐�\n");
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