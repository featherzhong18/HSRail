#pragma once
#include "Common.h"
#include "User.h"
#include"Ticket.h"

#define valid 1
#define invalid 0

typedef struct Order {
    int number;        // 订单号
    User user;         // 乘车人
    TicketInfo ticket;//车票信息
    char* date;        // 买票日期
    int condition;     // 票的状态（有效和无效）
    struct Order* next;
} Order, * OrderNode;