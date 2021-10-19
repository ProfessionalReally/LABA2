#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;
struct Friends
{
public:
	string name = ""; //Имя
	string surname = ""; //Фамилия
};

Friends InitFriends(string name, string surname); //Инициализация друзей

Friends InputFriends(); //Изменение данных о друзьях

void OutputFriends(Friends Human); //Вывод данных о друзьях

Friends DeleteFriends(Friends Human); //Удаление друзей