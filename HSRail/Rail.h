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
} RailNode, *RailList;

Status InitRailList(RailList &R);//初始化车次链表
RailNode* MakeRailNode(int id, Route route, String date, int num);//创建车次结点
Status InsertRailNode(RailNode* p, RailNode* q);//插入车次结点
Status DeleteRailNode(RailNode* p, int& id);//删除车次结点
Status CreateRailList(RailList& R, int n, int* id, Route* route, String* date, int* num);//创建车次链表