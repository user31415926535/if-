#include <stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数字：");
	scanf("%d%d", &a, &b);
	if
		(a < b)
		printf("%d", a);
	else if
		(a = b)
		printf("%d %d", a, b);
	else
		printf("%d", b);
	return 0;
}
