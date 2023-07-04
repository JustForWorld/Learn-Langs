// prata_cw_3.3.c -- outputs the number 100 in decimal, octal, and hexadecimal form
#include <stdio.h>
int main(void) {
	int x = 100;
	printf("десятичное = %d; восьмеричное =  %o; шестнадцатеричное =  %x\n", x, x, x);
	printf("десятичное = %d; восьмеричное =  %#o; шестнадцатеричное =  %#x\n", x, x, x);
	return 0;
}
