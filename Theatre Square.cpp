#include <stdio.h>

int main(){
	long long a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long square=a*b;
	for(int i=1; ;i++){
		if(c*c*i>square&&i%2==0){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
