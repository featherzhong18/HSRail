#pragma once
#include "Common.h"
#include "Order.h"

typedef struct User {
    String name;     // ����
    char id[18];       // ���֤��
    char password[20]; // ����
    int money;         // ʣ��Ǯ�����Ǳ�Ҫ��
    int allTickets;    // �ܹ��Ķ�����
    int nowTickets;    // ���ڵĶ�����
    Order* order;     // �û��Ķ�������
    //Status isFree;     // �����жϿͻ��Ƿ����
    struct User* next;
} UserNode, * UserList;

Status InitUserList(UserList& U);//��ʼ���û�����