#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
struct Figure
{
public:
	int figure = 0; //Фигура
	int color = 0; //Цвет
};

Figure InitFigure(int figure, int color); //Инициализация фигуры

Figure InputFigure(); //Изменение данных о фигуре

void OutputFigure(Figure View); //Вывод данных о фигуре

Figure DeleteFigure(Figure View); //Удаление данных о фигуре


