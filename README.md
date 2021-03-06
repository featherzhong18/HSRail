# HSRail
### 高铁订票系统

#### 一、需求介绍

我们希望建立一个高铁的售票系统，该系统分为两个模块，**用户模块**和**管理员模块**。用户模块的功能有用户的登录及注销、订票、退票、通过起点和终点和日期查询车次及信息、通过搜索车次查询车次信息、通过搜索日期查询车次、搜索后的排序（按路线或票价或时长日期）；而管理员模块则是负责车次信息的录入删除和用户的管理。

由于一趟高铁起点和终点是固定的，而用户上车和下车的站点可能只是这一趟高铁中的途径点，所以用户的路程不是按照车次的整条路程进行考虑，所以我们只在车次中加入全程路线，且换乘系统目前暂不考虑。

票价和距离之间，可以使用一些公式进行推导。一趟车的票价由于距离不同，可能导致票价不一样。所以，我们只将票价存放在路线和订单中。

路线：路线链表、路程长度、票价、用时

车次：车次号、广州南->深圳北->惠州南->汕尾->潮阳->潮汕->汕头（总路线）、路程总长度、日期、票数

用户通过搜索得到的车次信息：车次号、票价、路程长度、票数、路线（举例：惠州南->汕尾->潮阳）、日期

#### 二、数据结构

##### 1、高铁地图网

``` c
#define VISITED 1
#define UNVISITED 0
typedef char Place[21];
typedef struct Map {
    Place* places;   // 站点
    int** ways;         // 道路，其中的权值为路程的长度
    int placeNum;      // 地点个数
    int wayNum;        // 道路数
    int* tags;         // 用于遍历时的标记
} Map;
```

##### 2、用户

``` c
typedef struct User {
    char name[20];     // 姓名
    char id[18];       // 身份证号
    char password[20]; // 密码
    int money;         // 剩余钱数（非必要）
    int allTickets;    // 总共的订单数
    int nowTickets;    // 现在的订单数
    Order* orders;     // 用户的订单链表
    Status isFree;     // 用于判断客户是否空闲
    struct User* next;
} User, *UserNode;
```

##### 3、路线

``` c
typedef struct Route {
    Place* places;   // 路线中的所有地点
    int length;         // 该路线的长度
    int cost;           // 费用
    char* time;           // 用时
} Route;
```

##### 4、车次信息

``` c
typedef struct Rail {
    int id;            // 车次号
    Route route;       // 路线（总）
    char* date;        // 车次日期及时间
    int allTicketNum;  // 总票数
    int nowTicketNum;  // 现存的票数
    struct Rail* next;
} Rail, *RailNode;
```

##### 5、订单信息

``` c
#define valid 1
#define invalid 0
typedef struct Order {
    int number;        // 订单号
    User user;         // 乘车人
    Rail rail;         // 车次
    Route route;         // 当前订单的路线
    char* date;        // 买票日期
    int condition;     // 票的状态（有效和无效）
    struct Order* next;
} Order, *OrderNode;
```

##### 6、搜索信息

```c
typedef struct SearchList {
    int id;
    Route route;
    char* date;
    int ticketNum;
}
```

#### 三、菜单安排

###### 1、用户选择及登录

用户输入身份证以及密码进行登录，若没有账号，则进入注册。密码使用*进行加密。

###### 2、用户界面

用户有车票搜索、订单搜索、退票、改签、改变到站、查看个人信息或修改、注销账号等操作。

###### 3、搜索界面

用户通过输入起点、终点以及日期，进入搜索后的界面。搜索到的内容有：车次号、起始点（即搜索的起始点，并标明始、过、终）、出发时间、路程、剩余票数、票价；初始是按照出发时间进行排序，下方有排序的方法（分别按路程、票价、票数排序），交换始终点以及订票选择。

###### 4、订票

###### 5、退票

###### 6、改签

###### 7、更换地点

###### 8、个人信息

###### 9、订单搜索

#### 四、函数设置

#### 五、应该考虑的临界条件

#### 六、可以进行补充的条件

##### 1、是否要给列车增加等级？

火车类型高铁G、动车D；座位等级，如二等座、一等座、商务座。

##### 2、是否给用户加入钱包？

可以给用户买票进行一些限制。

##### 3、候补订单功能？

##### 4、是否给用户加入乘车人列表？

##### 5、……

#### 七、部分数据的设置

##### 1、地图网的内容

##### 2、票价、路程、时长之间的计算函数设定

##### 3、时间日期的设置

