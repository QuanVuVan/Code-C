#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	gt(a,n);
	int max=a[0];
	for(int i=1; i < n; i++){
		if(a[i] > max) max=a[i];
	}
	printf("%d", max);
	return 0;
}

