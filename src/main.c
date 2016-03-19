#include "qwerty.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	srand(time(NULL));
	int a[10];
	for(int i = 0; i < 10; i++)
		a[i] = rand() % 50;
	qwerty(a, 10);
	return 0;
} 
	
