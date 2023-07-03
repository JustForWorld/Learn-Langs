// hello_name.c -- Returns the entered name
#include <stdio.h>
#define MAX_LIMIT 100
int main(int argc, char* argv[]) {
	char name[MAX_LIMIT];
	fgets(name, MAX_LIMIT, stdin);
	printf("Hello, %s", name);
	return 0;
}
