#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10^1000];
	scanf("%1000s", c); // Gi?i h?n t?i da 1000 ký t?
	int count=0;
	for(int i=0; i<strlen(c); i++){
		count++;
	}
	printf("%d", count);
	return 0;
}
