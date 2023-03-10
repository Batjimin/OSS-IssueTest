
#include <stdio.h>
int main()
{
	char c = 'A';
	char* pc = &c;
	char** ppc = &pc;
	printf("%p %p\n", pc, pc + 1);
	printf("%p %p\n", ppc, ppc + 1);
	printf("%p %p\n", &c, &c + 1);
	printf("%p %p\n", &pc, &pc + 1);
	printf("%p %p\n", &ppc, &ppc + 1);
	return 0;
}

//202201541 컴퓨터공학부 박지민
