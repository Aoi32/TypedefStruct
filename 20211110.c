#include <stdio.h>
typedef unsigned int positive_n;
typedef struct{
	positive_n N;
	char* C;
} Kozotai;
int main()
{
Kozotai s,*p;	//構造体変数s,ポインタpの生成
p=&s;	//ポインタに実体のアドレスをコピー
s.N=2;	//メンバの初期化
p->C="aiueo";	//ポインタを使ったメンバの初期化
printf("%d %s", s.N, s.C);
}