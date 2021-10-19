#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;
struct SetAccount
{
public:
	string name = ""; //Имя
	string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
};

SetAccount InitAccount(string name, string surname, string email, string password); //Инициализация аккаунта

SetAccount InputAccount(); //Изменение данных о аккаунте

void OutputAccount(SetAccount User); //Вывод данных о аккаунте