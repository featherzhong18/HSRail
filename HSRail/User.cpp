#include "User.h"

Status InitUserList(UserList& U) {//��ʼ���û�����
	U = (UserList)malloc(sizeof(UserNode));
	if (!U) return ERROR;
	U->order = NULL;
	U->next = NULL;
	return OK;
}

