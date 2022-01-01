#pragma once
#include "Common.h"
#include "Order.h"

typedef struct User {
    String name;     // ����
    String id;      // ���֤��
    String password; // ����
    int money;         // ʣ��Ǯ�����Ǳ�Ҫ��
    int allTickets;    // �ܹ��Ķ�����
    int nowTickets;    // ���ڵĶ�����
    Order* order;     // �û��Ķ�������
    //Status isFree;     // �����жϿͻ��Ƿ����
    struct User* next;
} UserNode, * UserList;

Status InitUserList(UserList& U);//��ʼ���û�����