#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define MAX_NUM_THREADS 1024
#define DEFAULT_NUM_THREADS 20

#define FAILURE -1
#define SUCCESS 0

void usage (void);

void *thread_func( void * not_used )
{
	int i, j, k; 	/* counters */

	int p, q, r;	/* variables */

	printf("Starting thread %d\n", (int)not_used);
	sleep(1);
	for ( i=1; i<100; i++ ) {
		for ( j=1; j<10; j++ ) {
			for ( k=1; k<10; k++ ) {
				p=q*i+r/j+k;
			}
			q=q+j*r;
		}
		r=r-i*p;
	}
	
	printf("Finishing thread %d\n", (int)not_used);
	return SUCCESS;

}

int main(int argc, char **argv)
{
	int i;
	int thread_num;
	pthread_t thrd[MAX_NUM_THREADS];

	if (argc==2)
	{
		thread_num = atoi(argv[1]);
		if (thread_num < 1 && thread_num > MAX_NUM_THREADS) {
			usage();
		}
	} else {
		thread_num = DEFAULT_NUM_THREADS;
	}

	for ( i=0; i<thread_num; i++ ) {
		printf("Thread %d\n", i);
		/* We are not testing pthread_create 
		 * so don't give up if it fails 	*/
		if ( pthread_create( &(thrd[i]), NULL, thread_func, (void*)i ) != 0 )
			perror("Thread creation failed");
	}
	/* Join and wait for all threads to finish */
	for ( i=0; i<thread_num; i++ ) {
		pthread_join( thrd[i], NULL );
	}

	pthread_exit(0);
}

void usage (void)
{
	printf("Usage: ./test <num_of_threads>");
	exit(FAILURE);
}

