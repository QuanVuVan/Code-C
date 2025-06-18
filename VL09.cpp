#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float x''sum=0;
	float giai_thua=1;
	scanf("%d %f", &n, &x);
	if(x>10||x<-10||n>10) return 1;
	for(int i=1; i<=n; i++){
		giai_thua*=i;
		sum+=pow(x, i)/giai_thua;
	}
	printf("%.2f", sum);
	return 0;
}
