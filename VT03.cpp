#include <stdio.h>

void gt(long long a[], int n){
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	long long a[n];
	gt(a,n);
	long long max=-10e9;
	int chi_so=0;
	for(int i=n-1; i>=0; i--){
		if(max<a[i]){
			max=a[i];
			chi_so=i;
		}	
	}
	printf("%d", chi_so);
	return 0;
}
//kha nang co 2 so cung max nhung chua in ra so lon nhat
