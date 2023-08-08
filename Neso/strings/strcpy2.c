#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Hey my boy";
	char s2[10];
	char s3[5];
	//strcpy(s2, s1);
	strncpy(s3, s1, sizeof(s3));
	s3[sizeof(s3)] = '\0';
	//printf("%s\n", s2);
	printf("%s\n", s3);
	//printf("%s\n", s3);
	return 0;
}
