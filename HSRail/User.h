#pragma once
#include "Common.h"
#include "Order.h"

typedef struct User {
    String name;     // ����
    String id;       // ���֤��
    String password; // ����
    //char id[18];       // ���֤��
    //char password[20]; // ����
    int money;         // ʣ��Ǯ�����Ǳ�Ҫ��
    int allTickets;    // �ܹ��Ķ�����
    int nowTickets;    // ���ڵĶ�����
<<<<<<< HEAD
    Order *order;     // �û��Ķ�������
=======
    Order* order;     // �û��Ķ�������
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
    //Status isFree;     // �����жϿͻ��Ƿ����
    struct User* next;
} UserNode, * UserList;

Status InitUserList(UserList& U);//��ʼ���û�����