#include"Order.h"

Status InitOrderList(OrderList& O){//��ʼ����������
	O = (OrderList)malloc(sizeof(OrderNode));
	if (!O) return ERROR;
	O->next = NULL;
	return OK;
}
