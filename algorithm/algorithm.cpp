// pai.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include "Contents.h"
#include "Montecarlo.h"
#include "TowerOfHanoi.h"
#include "Ex1_2_Histogram.h"

int main()
{
	DisplayContent(CONTENTS_MONTECARLO);
	MontecarloSimulationPai();
	
	DisplayContent(CONTENTS_TOWER_OF_HANOI);
	TowerOfHanoiDo(3);

	DisplayContent(CONTENTS_HISTOGRAM);
	Histogram();

	system("pause");
}

