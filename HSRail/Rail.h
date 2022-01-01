#pragma once
#include "Common.h"
#include "Route.h"

typedef struct Rail {
    int id;            // 车次号
    Route route;       // 路线（总）
    Date date;        // 车次日期及时间
    int allTicketNum;  // 总票数
    int nowTicketNum;  // 现存的票数
    struct Rail* next;
} RailNode, *RailList;

Status InitRailList(RailList &R);//初始化车次链表
RailNode* MakeRailNode(int id, Route route, String date, int num);//创建车次结点
Status InsertRailNode(RailList& R, RailNode* p);//插入车次结点
Status DeleteRailNode(RailList& R, int id);//删除车次
Status AddRailNode(RailList& R, int id, Route route, String date, int num);//增加车次
Status CreateRailList(RailList& R, int n, int* id, Route* route, String* date, int* num);//创建车次链表
