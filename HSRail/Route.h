#pragma once
#include "Common.h"

typedef struct Route {
    String* places;   // 路线中的所有地点
    int length;         // 该路线的长度
    int cost;           // 费用
    char* time;           // 用时
} Route;