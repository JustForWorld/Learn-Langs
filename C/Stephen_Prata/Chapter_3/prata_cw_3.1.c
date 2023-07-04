// prata_cw.3.1.c -- you weight in platinum equivalent
#include <stdio.h>
int main(void) {
	float weight;
	float value;
	
	printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
	printf("Давайте подсчитаем.\n");
	printf("Пожалуйста, введите свой вес, выраженный в фунтах: ");	
	scanf("%f", &weight);
	/* считаем, что цена равна родий (драгоценный металл платиновой группы)
	равна $1700 за тройскую унцию */
	// 14.5833 коэффициент для перевода веса, выраженного в фунтах, в тройские унции.
	value = 1700.0 * weight * 14.5833;
	printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);
	printf("Вы легко можете стать достойным этого! Если цена платины падает,\n");
	printf("ешьте больше для поддержания своей стоимости.\n");
	
	return 0;
}
