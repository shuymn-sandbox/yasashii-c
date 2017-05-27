#include <stdio.h>

int main(void)
{
	int res; // int型であることを指定．

	printf("整数を入力してください．\n");

	scanf("%d", &res); // 整数なので変換仕様はdを使う．&を忘れずに

	if (res == 1){
		printf("1が入力されました．\n");
	}
	else{
		printf("1以外が入力されました．\n");
	}

	return 0;
}
