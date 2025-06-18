#include <stdio.h>

int main(){
	char a,b;
	scanf("%c %c", &a, &b);
	for(int i=a; i<=b; i++){
		printf("%c ", i-32);
	}
	return 0;
}
