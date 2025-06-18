#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n,a[1000];
	scanf("%d", &n);
	gt(a,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
//	for(int i=0; i<n; i++){
//		printf("%d ", a[i]);
//	}
	int x=n/2;
	int count=0;
	for(int j=n/2; j<n; j++){
		if(a[x-1]==a[j]) count++;
	}
	printf("%d", count+x);
	return 0;
}
