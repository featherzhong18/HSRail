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

Status InsertRailNode(RailList& R, RailNode* p) {//插入车次结点
	if (NULL == p) return ERROR;
	p->next = R->next;
	R->next = p;
	return OK;
}

Status DeleteRailNode(RailList& R, int id) {//删除车次
	RailNode* p, * q;
	p = R->next;
	q = R;
	while (NULL != p) {
		if (p->id == id) break;
		q = p;
		p = p->next;
	}
	if (NULL == p) return ERROR;
	q->next = p->next;
	free(p);
	return OK;
}

Status AddRailNode(RailList& R, int id, Route route, String date, int num) {//增加车次
	RailNode* p;
	if (NULL == (p = MakeRailNode(id, route, date, num))) return ERROR;
	if (OK != InsertRailNode(R, p)) return ERROR;
	return OK;
}

Status CreateRailList(RailList& R, int n, int* id, Route* route, String* date, int* num) {//创建车次链表
	RailNode* p;
	int i;
	if (OVERFLOW == InitRailList(R)) return OVERFLOW;
	for (i = 0; i < n; i++) {
		if(NULL==(p = MakeRailNode(id[i], route[i], date[i], num[i]))) return ERROR;
		InsertRailNode(R,p);
	}
	return OK;
}

