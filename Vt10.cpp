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
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}	
	return 0;
}
