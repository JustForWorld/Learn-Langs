// prata_hw_2.7.c -- chapter 2; homework 7
#include <stdio.h>

void smile(void);

int main(void) {
	for (int i = 3; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			smile();
		}
		printf("\n");
	}
	return 0;
}

void smile(void) {
	printf("Улыбайся!");
}
