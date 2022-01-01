#include "User.h"

<<<<<<< HEAD
=======
Status InitUserList(UserList& U) {//初始化用户链表
	U = (UserList)malloc(sizeof(UserNode));
	if (!U) return ERROR;
	U->order = NULL;
	U->next = NULL;
	return OK;
}
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
