# include <stdio.h>

float add(int a, int b);
float sub(int a, int b);
float mul(int a, int b);
float div(int a, int b);

int main()
{
	int choice;
	float result, a, b;

	printf("Enter your choice: 0 for add, 1 for sub, 2 for mul and 3 for div\n");
	scanf("%d", &choice);
	printf("Enter two numbers\n");
	scanf("%f %f", &a, &b);

	switch(choice)
	{
		case 0: result = add(a, b); break;
		case 1: result = sub(a, b); break;
		case 2: result = mul(a, b); break;
		case 3: result = div(a, b); break;
	}

	printf("%f + %f = %f\n", a, b, result);
	return 0;
}

float add(int a, int b)
{
	return a + b;
}

float sub(int a, int b)
{
	return a - b;
}

float mul(int a, int b)
{
	return a * b;
}

float div(int a, int b)
{
	return a / b;
}

