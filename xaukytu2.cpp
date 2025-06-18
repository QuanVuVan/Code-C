#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[100], d[100];
	fgets(d, 100, stdin);
	gets(c);
	printf("%d %d\n", strlen(c), strlen(d));
	d[strlen(d)-1]='\0';
	printf("%d %d", strlen(c), strlen(d));
	return 0;
}
