#include"Order.h"

Status InitOrderList(OrderList& O){//初始化订单链表
	O = (OrderList)malloc(sizeof(OrderNode));
	if (!O) return ERROR;
	O->next = NULL;
	return OK;
}
