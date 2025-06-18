#include <stdio.h>

int main(){
	int n;
	double sum=0;
	scanf("%d", &n);
	if(n<2||n>10000){
		return 1;
	}
	else {													
		for(double i=2; i<=n; i++ ){
		sum+=1/i;
	}
}
	printf("%.4lf", sum);
	return 0;
}
