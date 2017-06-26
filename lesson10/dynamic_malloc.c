#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *str;
  int num, i;

  // 配列を動的に確保できれば，無駄遣いが少なくなる
  // このときに，malloc関数とfree関数を使う．
  printf("何文字のaを用意しますか？\n");
  scanf("%d", &num);

  // str には確保されたメモリの場所を表すポインタが得られる
  // \0を入れるため，char型のサイズ分のメモリをnum+1個分確保
  str = (char *) malloc (sizeof(char) * (num+1));
  // 実行時にメモリが確保できなかったときのためにエラー処理をする
  if (!str) {
    printf("メモリが確保できませんでした．\n");
    return 1;
  }

  // ポインタを使って文字を配列に格納
  for (i = 0; i < num; i++)
    *(str+i) = 'a';

  *(str+num) = '\0'; // 最後に\0をつけて文字列にする

  printf("%sを用意しました．\n", str);

  // 使い終わったメモリを開放
  // 開放しないと，実行するたびに使えるメモリが減っていく
  free(str);

  return 0;
}
