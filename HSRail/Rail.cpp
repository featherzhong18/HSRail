#include"Rail.h"

Status InitRailList(RailList& R) {
	R = (RailList)malloc(sizeof(RailNode));
	if (!R) return ERROR;
	R->next = NULL;
	return OK;
}

RailNode* MakeRailNode(int id, Route route, String date, int num) {
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