#include"Rail.h"

Status InitRailList(RailList& R) {//初始化车次链表
	R = (RailList)malloc(sizeof(RailNode));
	if (!R) return OVERFLOW;
	R->next = NULL;
	return OK;
}

RailNode* MakeRailNode(int id, Route route, String date, int num) {//创建车次结点
	RailNode* p;
	p = (RailNode*)malloc(sizeof(RailNode));
	if (!p) return NULL;
	p->id = id;
	p->route = route;
	strcpy_s(p->date, date);
	p->allTicketNum = num;
	p->nowTicketNum = num;
	p->next = NULL;
	return p;
}

Status InsertRailNode(RailNode* p, RailNode* q) {//插入车次结点
	if (NULL == p || NULL == q) return ERROR;
	q->next = p->next;
	p->next = q;
	return OK;
}

Status DeleteRailNode(RailNode* p, int& id) {//删除车次结点
	RailNode* q;
	if (NULL == p || NULL == p->next) return ERROR;
	q = p->next;
	p->next = q->next;
	id = q->id;
	free(q);
	return OK;
}

Status CreateRailList(RailList& R, int n, int* id, Route* route, String* date, int* num) {//创建车次链表
	RailNode* p, * q;
	int i;
	if (OVERFLOW == InitRailList(R)) return OVERFLOW;
	p = R;
	for (i = 0; i < n; i++) {
		q = MakeRailNode(id[i], route[i], date[i], num[i]);
		InsertRailNode(p, q);
		p = q;
	}
	return OK;
}