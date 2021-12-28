#pragma once
#include "Common.h"

#define VISITED 1
#define UNVISITED 0

typedef struct Map {
    String* places;     // 站点
    int** ways;         // 道路，其中的权值为路程的长度
    int placeNum;       // 地点个数
    int wayNum;         // 道路数
    int* tags;          // 用于遍历时的标记
} Map;

int LocateVex(Map M, String places);