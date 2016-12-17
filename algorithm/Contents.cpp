#include "stdafx.h"

#include<stdio.h>
#include "Contents.h"


/*
C++
#include "stdafx.h"
TODO:きれいなインクルードの定義方法がわからん

*/

/**
* @file ファイル名.h
* @brief コンテンツ名を出力する。
* @author 私
* @date 2016/12/15
*/
int DisplayContent(char* content_name) {

	printf("##########################\n");
	printf("%s\n", content_name);
	printf("##########################\n");

	return 0;
}