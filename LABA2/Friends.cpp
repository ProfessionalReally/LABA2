#include "Friends.h"

Friends InitFriends(string name, string surname) //Инициализация друзей
{
	Friends Human;

	Human.name = name;
	Human.surname = surname;

	return Human;
}

Friends InputFriends() //Изменение данных о друзьях
{
	Friends Human;

	printf_s("\nPlease enter your friend's name: ");
	cin >> Human.name;
	printf_s("\nPlease enter your friend's surname: ");
	cin >> Human.surname;
	

	return Human;
}

void OutputFriends(Friends Human) //Вывод данных о друзьях
{
	if ((Human.name[0] == 0) && (Human.surname[0] == 0))
	{
		printf_s("Your friend's name: Empty\n");
		printf_s("Your friend's surname: Empty\n");
	}
	else
	{
		cout << "Your friend's name: " << Human.name << endl;
		cout << "Your friend's surname: " << Human.surname << endl;
	}
	printf_s("\n");
}

Friends DeleteFriends(Friends Human) //Удаление друзей
{
	Human.name = "";
	Human.surname = "";
	

	return Human;
}