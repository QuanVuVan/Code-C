#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	gt(a,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			int temp=0;
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int tich1 = a[n - 1] * a[n - 2] * a[n - 3];
	int tich2 = a[0] * a[1] * a[n - 1];
	if(tich2>tich1) printf("%d", tich2);
	else printf("%d", tich1);
	return 0;
}
