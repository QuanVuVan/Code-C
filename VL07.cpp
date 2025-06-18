#include <stdio.h>

int main(){
	long long n,k;
	long long gt1=1, gt2=1, gt3=1;
	scanf("%lld %lld", &n, &k);
	if(k>n) return 1;
	if(n>25||k<1) return 1;
	if(n==k) return 1;
	for(long long i=1; i<=n; i++){
		gt1*=i;
	}
	for(long long a=1; a<=k; a++){
		gt2*=a;
	}
	for(long long b=1; b<=(n-k); b++){
		gt3*=b;
	}
	//printf("%lld", gt1/(gt2*gt3));
	printf("%lld %lld %lld", gt1, gt2, gt3);
	return 0;	
}
