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
	string name = ""; //���
	string surname = ""; //�������
};

Friends InitFriends(string name, string surname); //������������� ������

Friends InputFriends(); //��������� ������ � �������

void OutputFriends(Friends Human); //����� ������ � �������

Friends DeleteFriends(Friends Human); //�������� ������