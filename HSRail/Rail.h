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

Status InitRailList(RailList &R);
RailNode* MakeRailNode(int id, Route route, String date, int num);