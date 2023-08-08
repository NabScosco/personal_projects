# include <stdio.h>
# define N 4

float sum(float a, float b) { return a + b;}
float sub(float a, float b) { return a - b;}
float mul(float a, float b) { return a * b;}
float div(float a, float b) { return a / b;}

int main()
{
	int choice;
	float a, b;
	float (*ptr[N])(float a, float b) = { sum, sub, mul, div};
	printf("Enter choice: 0-sum, 1-sub, 2-mul, 3-div: ");
	scanf("%d", &choice);
	printf("Enter two numbers: ");
	scanf("%f %f", &a, &b);
	printf("%f + %f = %f\n", a, b, ptr[choice](a, b));
	return 0;
}
