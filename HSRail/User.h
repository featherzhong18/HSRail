#pragma once
#include "Common.h"
#include "Order.h"

typedef struct User {
    String name;     // 姓名
    String id;       // 身份证号
    String password; // 密码
    //char id[18];       // 身份证号
    //char password[20]; // 密码
    int money;         // 剩余钱数（非必要）
    int allTickets;    // 总共的订单数
    int nowTickets;    // 现在的订单数
<<<<<<< HEAD
    Order *order;     // 用户的订单链表
=======
    Order* order;     // 用户的订单链表
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
    //Status isFree;     // 用于判断客户是否空闲
    struct User* next;
} UserNode, * UserList;

Status InitUserList(UserList& U);//初始化用户链表