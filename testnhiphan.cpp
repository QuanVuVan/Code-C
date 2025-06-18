#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int c[100];
	int count=0;
	if(a==0){
		printf("0");
	}
	while(a!=0){
		int mod=a%2;
		c[count++]=mod;
		a/=2;
	}
	for(int i=count-1; i>=0; i--){
		printf("%d", c[i]);
	}
	return 0;
}
