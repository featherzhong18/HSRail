#pragma once
#include "Common.h"
#include"Ticket.h"

#define valid 1
#define invalid 0

typedef struct Order {
    int orderid;        // ������
    String userid;     // �˳���
    TicketInfo ticket; //��Ʊ��Ϣ
    char* date;        // ��Ʊ����
    int condition;     // Ʊ��״̬����Ч����Ч��
    struct Order* next;
} OrderNode, * OrderList;

Status InitOrderList(OrderList& O);//��ʼ����������