#include <stdio.h>
int hello()
{
	int a, b;
	printf("�������������� ");
	scanf("%d %d", &a, &b);

	if (a != b)
		if (a < b)
			printf("%d", a);
		else
			printf("%d", b);
	else
		printf("%d %d", a, b);
	return 0;


}