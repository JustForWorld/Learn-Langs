// prata_cw_3.4.c -- additional ability function printf()
#include <stdio.h>
int main(void) {
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 9322469135782E30;
	
	printf("un = %u, но нет %d\n", un, un);
	printf("end = %hd и %d\n", end, end);
	printf("big = %ld, но не %hd\n", big, big);
	printf("verybig = %lld, но не %ld\n", verybig, verybig);

	return 0;
}
