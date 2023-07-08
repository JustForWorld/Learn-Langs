// prata_cw_3.6.c -- Chapter 3; classwork 6
#include <stdio.h>
#include <inttypes.h> 
int main(void) {
	int32_t me32;

	me32 = 45933945;
	printf("Сначала предположим, что int32_t является int: ");
	printf("me32 = %d\n", me32);
	printf("Далее не будем делать никаких предположений.\n");
	printf("Вместо этого воспольуемся \"макросом\" из файла inttypes.h: ");
	printf("me32 = %"PRId32"\n", me32);

	return 0;
}
