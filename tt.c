// C program to demonstrate segmentation fault
// by modifying a string literal
#include <stdio.h>

int main()
{
	char* str;

	// Stored in read only part of data segment //
	str = "GfG";

	// Problem: trying to modify read only memory //
	*(str + 1) = 'n';
    printf("%s\n",str);
	return 0;
}

