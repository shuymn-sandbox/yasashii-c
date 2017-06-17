#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 5 ;

	printf("num1とnum2に色々な演算を行います．\n");
	printf("加算:num1+num2は%dです．\n", num1+num2);
	printf("減算:num1-num2は%dです．\n", num1-num2);
	printf("乗算:num1*num2は%dです．\n", num1*num2);
	printf("除算:num1/num2は%dです．\n", num1/num2);
	printf("剰余:num1%%num2は%dです．\n", num1%num2);

	return 0;
}
