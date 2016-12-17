// pai.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

#include "Montecarlo.h"
#include "TowerOfHanoi.h"
#include "Contents.h"



int main()
{
	DisplayContent(CONTENTS_MONTECARLO);
	MontecarloSimulationPai();
	
	DisplayContent(CONTENTS_TOWER_OF_HANOI);
	TowerOfHanoiDo(3);

	system("pause");
}


