/*
 ============================================================================
 Name        : hello.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

extern int sub(int,int,int);

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	puts("!!!Hello World!!!");
	sub(1,2,3);
	return EXIT_SUCCESS;
}
