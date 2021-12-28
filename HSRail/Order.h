#pragma once
#include "Common.h"
#include "User.h"
#include"Ticket.h"

#define valid 1
#define invalid 0

typedef struct Order {
    int number;        // ������
    User user;         // �˳���
    TicketInfo ticket;//��Ʊ��Ϣ
    char* date;        // ��Ʊ����
    int condition;     // Ʊ��״̬����Ч����Ч��
    struct Order* next;
} Order, * OrderNode;