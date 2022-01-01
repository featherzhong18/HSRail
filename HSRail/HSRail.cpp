#include "Map.h"
#include "Order.h"
#include "Rail.h"
#include "Route.h"
#include "User.h"

int main() {
	/*scanf_s("%s", s, sizeof(String));
	gets_s(s, sizeof(String));*/
	char a, b;
	printf("input a:");
	scanf_s("%c", &a, 2);
	char a, b;
	printf("input a:");
	scanf_s("%c", &a, 2);
	while (getchar() != '\n') {
		while (getchar() != '\n') {
			getchar();
		}
		printf("请重新输入：");
		scanf_s("%c", &a, 2);
	}
	printf("%c\n", a);
	printf("input b:");
	scanf_s("%c", &b, 2);
	printf("%c\n", b);
	return 0;
}

void CreateRailMap() {
	String places[50] = {
		"广州南", "虎门", "深圳北", "惠州南", "汕尾", "潮阳", "潮汕", "汕头", "葵潭", "揭阳",
		"梅州西", "东莞", "广州东", "深圳坪山", "饶平", "东莞南", "陆丰", "畲江北", "丰顺东", "揭阳机场",
		"珠海", "中山", "普宁", "庆盛", "河源东", "广州南", "广州南", "广州南", "广州南", "广州南",
		"广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南",
		"广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南", "广州南",
	};
}