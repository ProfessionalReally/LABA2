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
	string name = ""; //���
	string surname = ""; //�������
	string email = ""; //�����
	string password = ""; //������
};

SetAccount InitAccount(string name, string surname, string email, string password); //������������� ��������

SetAccount InputAccount(); //��������� ������ � ��������

void OutputAccount(SetAccount User); //����� ������ � ��������