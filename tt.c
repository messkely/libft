// C program to demonstrate segmentation fault
// by modifying a string literal
#include <stdio.h>
#include <string.h>
int b;
int main()
{
	char a[3];
	a = NULL;
	printf("a = %p\n",a);
	printf("a = %p\n",&a);
	// printf("b = %d",b);
	return 0;
}
// 0x7ffee2c11800
// 0x7ffeec49d800