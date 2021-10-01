/*
 * =====================================================================================
 *
 *       Filename:  arithmetic.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  10/01/2021 07:34:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	register int res;
	
	__asm__( "movl $11, %%eax;"
		 "movl	$3, %%ebx;"
		 "subl %%ebx, %%eax;" : "=a" (res) 
	);

	printf("res = %i\n", res);

	
	register int add, arg1, arg2;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	__asm__( "addl %%ebx, %%eax;"
		 : "=a" (add)
		 : "a" (arg1), "b" (arg2)
        );

	printf("sum = %i\n", add);

	return EXIT_SUCCESS;

}








