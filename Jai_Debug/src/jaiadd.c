#include <stdio.h>
#include <stdlib.h>

int jaiadd(int d1, int d2, int d3)
{
	int buf[10];
	int i;

	printf("d1=%d d2=%d d3=%d\n", d1, d2, d3);
	for(i = 0; i < 10; i++){
		buf[i] = i;
	}
	for(i = 0; i < 10; i++){
		printf("buf[%d]=%d\n",i, buf[i]);
	}
    return 0;
}
