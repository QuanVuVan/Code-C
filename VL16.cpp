#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	int max;
	int sum=0;
	scanf("%d %d", &a, &b);
	if(a==0||b==0) printf("INVALID");
	a=abs(a);
	b=abs(b);
	if(a<b) max=b;
	if(b<a) max=a;
	for(int i=max;  ; i++){
		if(i%a==0&&i%b==0){
		printf("%d", i);
		return 0;
		}
	}
}
