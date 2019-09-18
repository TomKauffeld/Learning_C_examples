#include <stdio.h>
#include "hello.h"

// this is the body of our hello function
void hello() {
	
	// let's create a variable (a container) of type integer (a whole number) called year
	int year; 

	// now we inform the user that (s)he needs to enter the current year
	printf("Please enter the year : ");

	// and let's get the year (s)he entered inside of our year variable
	scanf_s("%d", &year); // &year means we want to write to the year variable (the & is to get the address of our variable, also called a pointer)

	// finally we show it to the user
	printf("Hello from %d\n", year);
}