#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

long long max_2(int a[], int n){
	long long c=-10e9, d=-10e9;
	for(int i=0; i<n; i++){
		if(a[i]>c){
			d=c;
			c=a[i];
		}
		if(a[i]<c){
			d=a[i];
		}
	}
	return d;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	gt(a,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	if(max_2(a,n)==-10e9) printf("NOT FOUND");
	else printf("%lld", max_2(a,n));
	return 0;
}
//cac truong hop bang nhau het chua giai quyet duoc
