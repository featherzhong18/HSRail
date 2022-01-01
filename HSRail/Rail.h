#pragma once
#include "Common.h"
#include "Route.h"

#define MAX_SEAT_NUM 50

typedef struct Rail {
    String id;            // 车次号
    Route route;       // 路线（总）
    Date date;        // 车次日期及时间
    int allTicketNum;  // 总票数
    int nowTicketNum;  // 现存的票数
    struct Rail* next;
} RailNode, *RailList;

Status InitRailList(RailList &R);//初始化车次链表
RailNode* MakeRailNode(String id, Route route, Date date, int num);//创建车次结点
Status InsertRailNode(RailList& R, RailNode* p);//插入车次结点
Status DeleteRailNode(RailList& R, String id);//删除车次
Status AddRailNode(RailList& R, String id, Route route, Date date, int num);//增加车次
Status CreateRailList(RailList& R, int n, String* id, Route* route, Date* date, int* num);//创建车次链表
