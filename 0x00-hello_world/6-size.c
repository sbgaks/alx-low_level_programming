#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	char c;
	
	float f;
	
	long int li;
	
	long long ll;

	printf("Size of a char: %zu byte(s)\n",sizeof(char));
	
	printf("Size of an int: %zu byte(s)\n",sizeof(int));
	
	printf("Size of a long int: %zu byte(s)\n",sizeof(long int));
	
	printf("Size of a long long: %zu bytes(s)\n",sizeof(long long));
	
	printf("Size of a float: %zu bytes(s)\n",sizeof(float));

	return (0);


}
