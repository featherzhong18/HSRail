#include"Rail.h"

Status InitRailList(RailList& R) {//��ʼ����������
	R = (RailList)malloc(sizeof(RailNode));
	if (!R) return OVERFLOW;
	R->next = NULL;
	return OK;
}

RailNode* MakeRailNode(String id, Route route, Date date, int num) {//�������ν��
	RailNode* p;
	p = (RailNode*)malloc(sizeof(RailNode));
	if (!p) return NULL;
	//p->id = id;
	strcpy(p->id, id);
	p->route = route;
	//strcpy_s(p->date, date); �ǵ��޸�
	p->date.day = date.day;   // ���޸�
	p->date.hour = date.hour;
	p->allTicketNum = num;
	p->nowTicketNum = num;
	p->next = NULL;
	return p;
}

Status InsertRailNode(RailList& R, RailNode* p) {//���복�ν��
	if (NULL == p) return ERROR;
	p->next = R->next;
	R->next = p;
	return OK;
}

Status DeleteRailNode(RailList& R, String id) {//ɾ������
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

Status AddRailNode(RailList& R, String id, Route route, Date date, int num) {//���ӳ���
	RailNode* p;
	if (NULL == (p = MakeRailNode(id, route, date, MAX_SEAT_NUM))) return ERROR;
	if (OK != InsertRailNode(R, p)) return ERROR;
	return OK;
}

Status CreateRailList(RailList& R, int n, String* id, Route* route, Date* date, int* num) {//������������
	RailNode* p;
	int i;
	if (OVERFLOW == InitRailList(R)) return OVERFLOW;
	for (i = 0; i < n; i++) {
		if(NULL==(p = MakeRailNode(id[i], route[i], date[i], num[i]))) return ERROR;
		InsertRailNode(R,p);
	}
	return OK;
}

