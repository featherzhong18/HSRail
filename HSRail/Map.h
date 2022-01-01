#pragma once
#include "Common.h"

#define INFINITY INT_MAX
#define VISITED 1
#define UNVISITED 0

typedef struct {
    String v, w;
    int info;
}WayInfo;//��·��Ϣ

typedef struct Map {
    String* places;     // վ��
    int** ways;         // ��·�����е�ȨֵΪ·�̵ĳ���
    int placeNum;       // �ص����
    int wayNum;         // ��·��
    int* tags;          // ���ڱ���ʱ�ı��
} Map;

int LocatePlaces(Map M, String places);
Status InitMap(Map& M, String* places, int n);
Status CreateMap(Map& G, String* places, int n, WayInfo* ways, int e);//������ͼ