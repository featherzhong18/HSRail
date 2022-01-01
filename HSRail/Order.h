#pragma once
#include "Common.h"
#include"Ticket.h"

#define valid 1
#define invalid 0

typedef struct Order {
    int orderid;        // 订单号
    String userid;     // 乘车人
    TicketInfo ticket; //车票信息
    char* date;        // 买票日期
    int condition;     // 票的状态（有效和无效）
    struct Order* next;
} OrderNode, * OrderList;

Status InitOrderList(OrderList& O);//初始化订单链表