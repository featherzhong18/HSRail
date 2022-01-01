#include "User.h"

Status InitUserList(UserList& U) {//初始化用户链表
	U = (UserList)malloc(sizeof(UserNode));
	if (!U) return ERROR;
	U->order = NULL;
	U->next = NULL;
	return OK;
}

