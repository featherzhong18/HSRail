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
		printf("���������룺");
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
		"������", "����", "���ڱ�", "������", "��β", "����", "����", "��ͷ", "��̶", "����",
		"÷����", "��ݸ", "���ݶ�", "����ƺɽ", "��ƽ", "��ݸ��", "½��", "���", "��˳��", "��������",
		"�麣", "��ɽ", "����", "��ʢ", "��Դ��", "������", "������", "������", "������", "������",
		"������", "������", "������", "������", "������", "������", "������", "������", "������", "������",
		"������", "������", "������", "������", "������", "������", "������", "������", "������", "������",
	};
}