#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int phan_du, sum=0;
		while(n!=0)
		{
			phan_du=n%10;
			sum=sum+phan_du;
			n=n/10;
		}
		printf("%d\n", abs(sum));
	}
	return 0;
}
