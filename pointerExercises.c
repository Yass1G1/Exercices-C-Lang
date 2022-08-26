#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
// First exercises : Show the basic declaration of pointers
	printf("Pointer : show the basic declaration of pointer :\n");
	printf("-----------------------------------------------");
	printf("\nHere is m=10, n and o are two integer variable and *z is an integer");
	int m = 10, n, o;
	int* z = &m;
	printf("\n\nz stores the address of m = %p", z);
	printf("\n\n*z stores the value of m = %d", *z);
	printf("\n\n&m is the address of m = %p", &m);
	printf("\n\n&n stores the address of n = %p", &n);
	printf("\n\n&o stores the address of o = %p", &o);
	printf("\n\n&z stores the address of z = %p", &z);

	
// Second exercise : ...
	int m = 29;
	printf("Adress of m : %p\n", &m);
	printf("Value of m : %d\n\n", m);
	int* ab = &m;
	printf("Now ab is assigned with the address of m.");
	printf("\nAddress of pointer ab : %p", ab);
	printf("\nContent of pointer ab : %d", *ab);
	m = 34;
	printf("\n\nThe value of m assigned to 34 now.");
	printf("\nAddress of pointer ab : %p", ab);
	printf("\nContent of pointer ab : %d", *ab);
	ab = 7;
	printf("\n\nThe pointer variable ab is assigned with the value 7 now.");
	printf("\nAddress of m : %p", &m);
	printf("\nValue of m : %d \n", m);
	
	
};
