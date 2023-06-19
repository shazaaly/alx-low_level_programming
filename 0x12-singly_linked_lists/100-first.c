#include "lists.h"
#include <stdio.h>
/**
* myStartupFun - Function to execute before main()
* This function is a constructor that will be automatically called before main
* is executed. It prints the message "You're beat! and yet, you must allow,"
* followed by "I bore my house upon my back!" to the console.
*/
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


