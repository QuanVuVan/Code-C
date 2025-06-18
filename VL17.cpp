#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int count=0;
	scanf("%d", &a);
	if(a<0) a=abs(a);
	for(int i=1; i<=a; i++){
		if(a%i==0) count++;
	}
	printf("%d", count);
	return 0;
}
