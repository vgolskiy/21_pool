#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "tes test string for testing";

	printf("%s", strstr(a, NULL));
	return (0);
}
