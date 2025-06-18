#include <stdio.h>

//nhap phan tu trong mang
void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	int a[n];
	gt(a,n);
	int count=0;
	for(int i=0; i<n; i++){
		if(a[i]==m) count++;
	}
	printf("%d", count);
	return 0;
}
