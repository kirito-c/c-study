#include <stdio.h>
#include "Strcat.h"
void strcat(char m[], char n[])
{
	int i, j;
	for (i = 0; m[i] != 0; i++);
	for (j = 0; n[i] != 0; j++)
		m[i + j] = n[j];
	    m[i + j] = '\0';
}

