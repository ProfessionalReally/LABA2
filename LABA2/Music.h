#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;

struct Music
{
public:
	string title = ""; //Название
	string executor = ""; //Исполнитель
};

Music MUSICinit(string executor, string title); //Инициализация музыки

Music MUSICinput(); //Изменение данных о музыке

void OutputMusic(Music Like); //Вывод данных о музыке

Music DeleteMusic(Music Like); //Удаление данных о музыке

