#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n==0){
		printf("INF");
		return 0;
	}	
	if(n<0){
		for(int i=-n; i>=1; i--){
			if(n%i==0) printf("%d ", i);
		}
	}
	if(n>0){
		for(int i=n; i>=1; i--){
			if(n%i==0) printf("%d ", i);
		}
	}
	return 0;
}
