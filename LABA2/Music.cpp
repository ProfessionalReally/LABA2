#include "Music.h"

Music MUSICinit(string executor, string title) //Инициализация музыки
{
	Music Like;

	Like.executor = executor;
	Like.title = title;

	return Like;
}

Music MUSICinput() //Изменение данных о музыке
{
	Music Like;

	printf_s("Please enter a executor: ");
	cin >> Like.executor;
	printf_s("Please enter a title: ");
	cin >> Like.title;

	return Like;
}

void OutputMusic(Music Like) //Вывод данных о музыке
{
	if ((Like.executor[0] == 0) && (Like.title[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << Like.executor << " - " << Like.title <<endl;
	}
	printf_s("\n");
}

Music DeleteMusic(Music Like) //Удаление данных о музыке
{
	Like.executor = "";
	Like.title = "";

	return Like;
}