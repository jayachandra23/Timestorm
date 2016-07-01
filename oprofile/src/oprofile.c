#include <stdio.h>
#include <stdlib.h>

#define LOOPCNT 1000

int fast_multiply(x,  y)
{
    return x * y;
}

int slow_multiply(x, y)
{
    int i, z;
    for (i = 0, z = 0; i < x; i++)
        z = z + y;
    return z;
}

int main(int argc, char** argv)
{
    int i,j;
    int x,y;

    int iterations;

    if(argc != 2)
    {
       printf("Usage %s <No of Iterations>\n", argv[0]);
       //exit(-1);
       iterations = LOOPCNT;
    }
    else
       iterations = atoi(argv[1]);

    printf("--- multiply test start.\n");
    for (i = 0; i < iterations; i ++) {
            for (j = 0; j < 5000 ; j++) {
                    x = fast_multiply(i, j);
                    y = slow_multiply(i, j);
            }
    }
    printf("--- multiply test end.\n");
    return 0;
}
