#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "SetAccount.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
using namespace std;
struct Exit
{
	string null = "";
	int noll = 0;
};

SetAccount DeleteACCOUNT(SetAccount User); //Удаление аккаунта

Figure DeleteFIGURE(Figure View); //Удаление фигуры

Friends DeleteFRIENDS(Friends Human); //Удаление друзей

Music MUSICDelete(Music Like); //Удаление музыки
