# include <stdio.h>

struct employee{
	char *name;
	int age;
	float salary;
};

int manager()
{
	struct employee manager;
	
	printf("What is the age of the Manager? ");
	scanf("%d", &manager.age);

	if (manager.age > 30)
		manager.salary = 100000;
	else
		manager.salary = 55000;
	return (printf("Salary of Manager: %f\n",manager.salary));
}

int main()
{
	struct employee emp1, emp2;

	printf("Enter the salary of employee1: ");
	scanf("%f", &emp1.salary);

	printf("Enter the salary of employee1: ");
	scanf("%f", &emp2.salary);

	manager();

	printf("Salary of Employee1: %f\n",emp1.salary);
	printf("Salary of Employee2: %f\n",emp2.salary);
	return 0;
}
