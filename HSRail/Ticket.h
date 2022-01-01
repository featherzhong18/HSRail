#pragma once
#include "Common.h"

typedef struct {
	int id; //车次号
	String start;//起点
	String end;//终点
	String starttime;//发车时间
	String endtime;//到站时间
	int price;//票价
}TicketInfo;//车票信息
