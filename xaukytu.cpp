#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1000]="28tech";
	printf("%s\n", c);
	char d[]={'2', '8', 't', 'e', 'c', 'h'};
	printf("%s\n", d);
	//cach nhap
	//cach1:(khong nhan dau cach va dau xuong dong)
	char s[1000];
	scanf("%s", s);
	printf("%s\n", s);
	//cach2:co dau cach
	char q[1000];
	gets(q);
	//or
	fgets(q, 1000, stdin);
	printf("%s", q);
	//
	getchar(); //dung truoc ham scanf
	//or
	while(getchar()!='\n');
	return 0;
}
