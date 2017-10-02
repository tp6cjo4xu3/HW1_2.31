#include <stdio.h>
#include <stdlib.h>
int a, b, c;
int main(void)
{
	printf("number  square  cube\n");

	for (a = 0; a <=10; a++)
	{	
		b = a*a;
		c = a*a*a;
		printf("%d	%d	%d\n",  a, b, c);
	}
	system("pause");
	return 0;
}							