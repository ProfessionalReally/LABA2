#include "SetAccount.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Exit.h"
#include "string"
#include "Windows.h"
int menu()
{
	int i;
	system("cls");
	printf_s("  1) SetAccount\n  2) Figure\n  3) Friends\n  4) Music\n  5) Exit and Delete\n  0) Exit the program\n\n  Choose: ");
	scanf_s("%d", &i);
	return i;
}

int main()
{
	//SetAccount
	string nameA = "Anton"; //Имя
	string surnameA = "Petrov"; //Фамилия
	string emailA = "Petrov22@gmail.com"; //Почта
	string passwordA = "111222333"; //Пароль
	SetAccount User;
	//Figure
	int figure = 2;
	int color = 1;
	Figure View;
	//Friends
	string nameF = "Ivan";
	string surnameF = "Ivanov";
	Friends Human;
	//Music
	string title = "Kukushka"; //Название
	string executor = "Choi"; //Исполнитель
	Music Like;
	

	int g = 0; //Флаг
	int f = 1; //Флаг
	int n; //Для выбора действий

	do
	{
		switch (menu())
		{
		case 0:
		{
			f = 0;
			break;
		}
		case 1: //Создание аккаунта и вход
		{
			do 
			{
				system("cls");
				printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					User = InitAccount(nameA, surnameA, emailA, passwordA);
					g = 1;
				}
				if (n == 2)
				{
					User = InputAccount();
					g = 1;
				}
				if (n == 3)
				{
					OutputAccount(User);
					system("pause");
				}
			} while (n != 0);
			break;
		}
		case 2: //Фигуры
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						View = InitFigure(figure, color);
					}
					if (n == 2)
					{
						View = InputFigure();
					}
					if (n == 3)
					{
						OutputFigure(View);
						system("pause");
					}
					if (n == 4)
					{
						View = DeleteFigure(View);
					}
				} while (n != 0);
			}
			break;
		}
		case 3: //Друзья
		{
			if (g) 
			{
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						Human = InitFriends(nameF, surnameF);
					}
					if (n == 2)
					{
						Human = InputFriends();
					}
					if (n == 3)
					{
						OutputFriends(Human);
						system("pause");
					}
					if (n == 4)
					{
						Human = DeleteFriends(Human);
					}
				} while (n != 0);
			}
			break;
		}
		case 4: //Музыка
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						Like = MUSICinit(executor, title);
					}
					if (n == 2)
					{
						Like = MUSICinput();
					}
					if (n == 3)
					{
						OutputMusic(Like);
						system("pause");
					}
					if (n == 4)
					{
						Like = DeleteMusic(Like);
					}
				} while (n != 0);
			}
			break;
		}
		case 5: //Удаление и выход из аккаунта
		{
			do 
			{
				system("cls");
				printf_s("\n  1 - Delete and Exit\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					User = DeleteACCOUNT(User);
					View = DeleteFIGURE(View);
					Human = DeleteFRIENDS(Human);
					Like = MUSICDelete(Like);
				}
			} while (n != 0);
			break;
		}
		}
	} while (f);
}

