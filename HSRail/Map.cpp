#include "Map.h"

int LocateVex(Map M, String p)
{//ss
	int i;
	for (i = 0; i < M.placeNum; i++)
		if (p == M.places[i]) return i;
	return -1;
}
