// prata_hw_2.5.c -- chapter 2; homework 5
#include <stdio.h>

void br(void);
void ic(void);

int main(void) {
	br(); printf(", "); ic(); printf("\n");
	ic(); printf("\n");
	br(); printf("\n");
	return 0;
}

void br(void) {
	printf("Бразилия, Россия");
}

void ic(void) {
	printf("Индия, Китай");
}
