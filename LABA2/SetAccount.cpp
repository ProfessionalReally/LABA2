#include "SetAccount.h"

#define N 50
SetAccount InitAccount(string name, string surname, string email, string password) //Инициализация аккаунта
{
	SetAccount User;
	User.name = name;
	User.surname = surname;
	User.email = email;
	User.password = password;

	return User;
}

SetAccount InputAccount() //Изменение данных о аккаунте
{
	SetAccount User;
	printf_s("\nPlease enter a name: ");
	cin >> User.name;
	printf_s("\nPlease enter a surname: ");
	cin >> User.surname;
	printf_s("\nPlease enter a email: ");
	cin >> User.email;
	printf_s("\nPlease enter a password: ");
	cin >> User.password;

	return User;
}

void OutputAccount(SetAccount User) //Вывод данных о аккаунте
{
	if ((User.name[0] == 0) && (User.surname[0] == 0) && (User.email[0] == 0) && (User.password[0] == 0))
	{
		printf_s("\nName: empty");
		printf_s("\nSurname: empty");
		printf_s("\nEmail: empty");
		printf_s("\nPassword: empty");
	}
	else
	{
		cout << "Name: " << User.name << endl;
		cout << "Surname: " << User.surname << endl;
		cout << "Email: " << User.email << endl;
		cout << "Password: " << User.password << endl;
	}
	printf_s("\n");
}