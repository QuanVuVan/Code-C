#include <stdio.h>
#include <math.h>

int rut_gon(int a, int b){
	int min,c,d;
	c=abs(a);
	d=abs(b);
	if(c<d) min=c;
	if(c>d) min=d;
	for(int i=min; i>=1; i--){
		if(c%i==0&&d%i==0) return i;
	}
}

int main(){
	int a,b,tu,mau;
	scanf("%d %d", &a, &b);
//	printf("%d", rut_gon(a,b));
	tu=a/rut_gon(a,b);
	mau=b/rut_gon(a,b);
	printf("%d %d", tu, mau);
	return 0;
}
