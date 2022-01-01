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
<<<<<<< HEAD
	for (i = 0; i < M.placeNum; i++) /*M.places[i] = places[i];*/  // 记得更改。。。。
		strcpy(M.places[i], places[i]);
=======
	for (i = 0; i < M.placeNum; i++) strcpy_s(M.places[i], places[i]);//改了
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
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

Status CreateMap(Map& M, String* places, int n, WayInfo* ways, int e) {
	if (n < 0 || e < 0 || (n > 0 && NULL == places) || (e > 0 && NULL == ways))
		return ERROR;
	int i, j, k;
	String v, w;
	if (InitMap(M, places, n) != OK) return ERROR;
	M.wayNum = e;
	for (k = 0; k < M.wayNum; k++) {
		/*v = ways[k].v;
		w = ways[k].w;*/
		strcpy(v, ways[k].v);
		strcpy(w, ways[k].w);
		i = LocatePlaces(M, v);
		j = LocatePlaces(M, w);
		if (i < 0 || j < 0) return ERROR;
		M.ways[i][j] = M.ways[j][i] = ways[k].length;
	}
	return OK;
}