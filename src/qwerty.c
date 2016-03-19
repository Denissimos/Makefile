#include "qwerty.h"
#include <stdio.h>


int qwerty (int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
		if(i % 5 == 0)
		puts("");
	}
	return 0;
}
