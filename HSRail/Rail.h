#pragma once
#include "Common.h"
#include "Route.h"

typedef struct Rail {
    int id;            // ���κ�
    Route route;       // ·�ߣ��ܣ�
    String date;        // �������ڼ�ʱ��
    int allTicketNum;  // ��Ʊ��
    int nowTicketNum;  // �ִ��Ʊ��
    struct Rail* next;
} RailNode, *RailList;

Status InitRailList(RailList &R);//��ʼ����������
RailNode* MakeRailNode(int id, Route route, String date, int num);//�������ν��
Status InsertRailNode(RailList& R, RailNode* p);//���복�ν��
Status DeleteRailNode(RailList& R, int id);//ɾ������
Status AddRailNode(RailList& R, int id, Route route, String date, int num);//���ӳ���
Status CreateRailList(RailList& R, int n, int* id, Route* route, String* date, int* num);//������������