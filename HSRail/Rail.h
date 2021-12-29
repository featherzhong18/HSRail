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