#include "Map.h"
#include "Order.h"
#include "Rail.h"
#include "Route.h"
#include "User.h"

int main() {
	char a, b;
	printf("input a:");
	scanf_s("%c", &a, 2);
	while (getchar() != '\n') {
		while (getchar() != '\n') {
			getchar();
		}
		printf("«Î÷ÿ–¬ ‰»Î£∫");
		scanf_s("%c", &a, 2);
	}
	printf("%c\n", a);
	printf("input b:");
	scanf_s("%c", &b, 2);
	printf("%c\n", b);
}