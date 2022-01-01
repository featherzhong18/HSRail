#include "Map.h"
#include "Order.h"
#include "Rail.h"
#include "Route.h"
#include "User.h"

int main() {
<<<<<<< HEAD
	/*scanf_s("%s", s, sizeof(String));
	gets_s(s, sizeof(String));*/
	char a, b;
	printf("input a:");
	scanf_s("%c", &a, 2);
=======
	char a, b;
	printf("input a:");
	scanf_s("%c", &a, 2);
	while (getchar() != '\n') {
		while (getchar() != '\n') {
			getchar();
		}
		printf("ÇëÖØÐÂÊäÈë£º");
		scanf_s("%c", &a, 2);
	}
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
	printf("%c\n", a);
	printf("input b:");
	scanf_s("%c", &b, 2);
	printf("%c\n", b);
<<<<<<< HEAD
	return 0;
=======
>>>>>>> 90471926657ce6bfa739bf557e9cb626d79ce394
}