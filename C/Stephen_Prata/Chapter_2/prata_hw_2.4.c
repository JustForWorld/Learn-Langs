// prata_hw_2.4.c -- chapter 2; homework 4
#include <stdio.h>

void jolly(void);
void deny(void);

int main(void) {
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}

void jolly(void) {
	printf("Он веселый молодец!\n");
}

void deny(void) {
	printf("Никто не может это отрицать!\n");
}
