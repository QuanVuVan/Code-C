#include <stdio.h>

int main(){
	long long n;
	long long sum=0;
	scanf("%lld", &n);
	for(int i=1; i<n; i++){
		if(n%i==0) {
			sum+=i;
			//if(sum==n) printf("YES");
			//printf("%lld", sum);
		}
		//return 0;
	}
	if(sum==n) printf("YES");
	else printf("NO");
	return 0;
}
