#include"Rail.h"

Status InitRailList(RailList& R) {//初始化车次链表
	R = (RailList)malloc(sizeof(RailNode));
	if (!R) return OVERFLOW;
	R->next = NULL;
	return OK;
}

RailNode* MakeRailNode(String id, Route route, Date date, int num) {//创建车次结点
	RailNode* p;
	p = (RailNode*)malloc(sizeof(RailNode));
	if (!p) return NULL;
	//p->id = id;
	strcpy(p->id, id);
	p->route = route;
	//strcpy_s(p->date, date); 记得修改
	p->date.day = date.day;   // 已修改
	p->date.hour = date.hour;
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

Status DeleteRailNode(RailList& R, String id) {//删除车次
	RailNode* p, * q;
	p = R->next;
	q = R;
	while (NULL != p) {
		if (0 == strcmp(p->id, id)/*p->id == id*/) break;
		q = p;
		p = p->next;
	}
	if (NULL == p) return ERROR;
	q->next = p->next;
	free(p);
	return OK;
}

Status AddRailNode(RailList& R, String id, Route route, Date date, int num) {//增加车次
	RailNode* p;
	if (NULL == (p = MakeRailNode(id, route, date, MAX_SEAT_NUM))) return ERROR;
	if (OK != InsertRailNode(R, p)) return ERROR;
	return OK;
}

Status CreateRailList(RailList& R, int n, String* id, Route* route, Date* date, int* num) {//创建车次链表
	RailNode* p;
	int i;
	if (OVERFLOW == InitRailList(R)) return OVERFLOW;
	for (i = 0; i < n; i++) {
		if(NULL==(p = MakeRailNode(id[i], route[i], date[i], num[i]))) return ERROR;
		InsertRailNode(R,p);
	}
	return OK;
}

