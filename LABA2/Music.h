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
	string title = ""; //��������
	string executor = ""; //�����������
};

Music MUSICinit(string executor, string title); //������������� ������

Music MUSICinput(); //��������� ������ � ������

void OutputMusic(Music Like); //����� ������ � ������

Music DeleteMusic(Music Like); //�������� ������ � ������

