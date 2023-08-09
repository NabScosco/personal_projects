# include<stdio.h>

struct{
	char name;
	int age;
	float salary;
} emp1, emp2;

int manager()
{
	struct{
		char name;
		int age;
		float salary;
	} manager;

	manager.age = 27;

	if (manager.age > 50)
	{
		manager.salary = 50000;
	}
	else
	{
		manager.salary = 30000;
	}
	return (manager.salary);
}

int main()
{
	printf("Enter the the salary of employee1:  ");
	scanf("%f", &emp1.salary);
	printf("Enter the the salary of employee2:  ");
	scanf("%f", &emp2.salary);
	printf("Salary of Employee1 is: %f\n", emp1.salary);
	printf("Salary of Employee2 is: %f\n", emp2.salary);
	printf("Salary of manager is: %d\n", manager());
	
	return 0;
}
