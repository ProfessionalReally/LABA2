#include "Figure.h"

Figure InitFigure(int figure, int color) //Инициализация фигуры
{
	Figure View;

	View.figure = figure;
	View.color = color;

	return View;
}

Figure InputFigure() //Изменение данных о фигуре
{
	Figure View;

	printf_s("\nPlease enter a figure(1 - Triangle, 2 - Circle, 3 - Square): ");
	cin >> View.figure;
	printf_s("\nPlease enter a color(1 - Red, 2 - Green, 3 - Blue): ");
	cin >> View.color;

	return View;
}

void OutputFigure(Figure View) //Вывод данных о фигуре
{
	if (View.figure == 0)
		printf_s("Figure: Empty\n");
	if (View.figure == 1)
		printf_s("Figure: Triangle\n");
	if (View.figure == 2)
		printf_s("Figure: Circle\n");
	if (View.figure == 3)
		printf_s("Figure: Square\n");
	if (View.color == 0)
		printf_s("Color: Empty\n");
	if (View.color == 1)
		printf_s("Color: Red\n");
	if (View.color == 2)
		printf_s("Color: Green\n");
	if (View.color == 3)
		printf_s("Color: Blue\n");
	printf_s("\n");
}

Figure DeleteFigure(Figure View) //Удаление данных о фигуре
{
	View.figure = 0;
	View.color = 0;

	return View;
}