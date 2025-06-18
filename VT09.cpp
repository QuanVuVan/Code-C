#include <stdio.h>
#include <math.h>

void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	gt(a,n);
	int bien=0;
	for(int i=0; i<n; i++){
		if(nt(a[i])){
			printf("%d ", a[i]);
		}
	}
	return 0;
}
