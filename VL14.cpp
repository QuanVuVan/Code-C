#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	int min;
	scanf("%d %d", &a, &b);
	a=abs(a);
	b=abs(b);
	if(a==0 || b==0) printf("%d", a+b);
	if(a<b) min=a;
	if(a>b) min=b;
	for(int i=min; i>=1 ;i--){
		if(a%i==0&&b%i==0){
			printf("%d", i);
			return 0;
		}
	}
}
