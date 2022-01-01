#pragma once
#include "Common.h"

typedef struct Route {
    String* places;   // 路线中的所有地点
    int* length;         // 该路线的长度
    int* price;           // 费用
    float* time;         // 用时
} Route;
