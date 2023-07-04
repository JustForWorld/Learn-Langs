// prara_cw_3.2.c -- show some properties of function printf
#include <stdio.h>
int main(void) {
	int ten = 10;
	int two = 2;

	printf("Выполняется правильно: ");
	printf("%d минус %d равно %d\n", ten, 2, ten - two);
	printf("Выполняется неправильно: ");
	printf("%d минус %d равно %d\n", ten);

	return 0;
}
