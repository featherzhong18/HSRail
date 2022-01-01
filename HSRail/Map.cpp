#include "Map.h"

int LocatePlaces(Map M, String p)
{
	int i;
	for (i = 0; i < M.placeNum; i++)
		if (p == M.places[i]) return i;
	return -1;
}

Status InitMap(Map& M, String* places, int n) {
	int i, j, info;
	if (n < 0 || (n > 0 && NULL == places)) return ERROR;
	info = INFINITY;
	M.placeNum = n;
	M.wayNum = 0;
	if (0 == n) return OK; // 空地图
	if (NULL == (M.places = (String*)malloc(n * sizeof(String))))
		return OVERFLOW;
	for (i = 0; i < M.placeNum; i++) {
		for(j=0;j<20;j++)
		M.places[i][j] = places[i][j];  //这样改不知道行不行
	}
	if (NULL == (M.ways = (int**)malloc(n * sizeof(int*))))
		return OVERFLOW;
	for (i = 0; i < n; i++)
		if (NULL == (M.ways[i] = (int*)malloc(n * sizeof(int))))
			return OVERFLOW;
	if (NULL == (M.tags = (int*)malloc(n * sizeof(int))))
		return OVERFLOW;
	for (i = 0; i < n; i++) {
		M.tags[i] = UNVISITED;
		for (j = 0; j < n; j++) M.ways[i][j] = info;
	}
	return OK;
}