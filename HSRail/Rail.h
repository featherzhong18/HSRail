#pragma once
#include "Common.h"
#include "Route.h"

typedef struct Rail {
    int id;            // 车次号
    Route route;       // 路线（总）
    String date;        // 车次日期及时间
    int allTicketNum;  // 总票数
    int nowTicketNum;  // 现存的票数
    struct Rail* next;
} Rail, * RailNode;