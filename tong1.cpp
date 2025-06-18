#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long du,sum=0;
	while(n!=0){
		du=n%10;
		sum=sum+du;
		n=n/10;
	}
	printf("%lld", sum);
	return 0;
}

