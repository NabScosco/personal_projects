#include <stdio.h>

int main()
{
	char s[] = "Hello My name is Kingsley";
	char t[50];

	int i;
	for(i=0; s[i] != '\0'; i++)
	{
		t[i] = s[i];
	}
	t[i] = '\0';
	printf("%s\n", t);

	return (0);
}
