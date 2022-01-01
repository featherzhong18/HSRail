#pragma once
#include "Common.h"

#define INFINITY INT_MAX
#define VISITED 1
#define UNVISITED 0

typedef struct {
    String v, w;
    int info;
}WayInfo;//道路信息

typedef struct Map {
    String* places;     // 站点
    int** ways;         // 道路，其中的权值为路程的长度
    int placeNum;       // 地点个数
    int wayNum;         // 道路数
    int* tags;          // 用于遍历时的标记
} Map;

int LocatePlaces(Map M, String places);
Status InitMap(Map& M, String* places, int n);
Status CreateMap(Map& G, String* places, int n, WayInfo* ways, int e);//创建地图