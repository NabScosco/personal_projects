# include <stdio.h>


int add(int a, int b);

int main()
{
	int result;
	int (*ptr)(int, int) = add;

	result = ptr(2,2);
	printf("%d\n", result);
}

int add(int a, int b)
{
	return a + b;
}
