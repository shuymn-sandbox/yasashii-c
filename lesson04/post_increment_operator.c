#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	b = ++a; // 前置インクリメント

	printf("aの値は%dです．\n", a);
	printf("代入前インクリメントしたのでbの値は%dです．\n", b);

	return 0;
}
