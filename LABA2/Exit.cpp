#include "Exit.h"

SetAccount DeleteACCOUNT(SetAccount User) //Удаление аккаунта
{
	Exit Delete;
	User.name = Delete.null;
	User.surname = Delete.null;
	User.password = Delete.null;
	User.email = Delete.null;
	return User;
}

Figure DeleteFIGURE(Figure View) //Удаление фигуры
{
	Exit Delete;
	View.figure = Delete.noll;
	View.color = Delete.noll;
	return View;
}

Friends DeleteFRIENDS(Friends Human) //Удаление друзей
{
	Exit Delete;
	Human.name = Delete.null;
	Human.surname = Delete.null;
	return Human;
}

Music MUSICDelete(Music Like) //Удаление музыки
{
	Exit Delete;
	Like.executor = Delete.null;
	Like.title = Delete.null;
	return Like;
}