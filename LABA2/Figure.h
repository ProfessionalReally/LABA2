#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
struct Figure
{
public:
	int figure = 0; //������
	int color = 0; //����
};

Figure InitFigure(int figure, int color); //������������� ������

Figure InputFigure(); //��������� ������ � ������

void OutputFigure(Figure View); //����� ������ � ������

Figure DeleteFigure(Figure View); //�������� ������ � ������


