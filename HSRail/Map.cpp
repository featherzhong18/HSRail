#include "Map.h"
//羽丰牛逼
int LocateVex(Map M, String p)
{//ss
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
	for (i = 0; i < M.placeNum; i++) M.places[i] = places[i];  // 记得更改。。。。
	if (NULL == (M.ways))

}