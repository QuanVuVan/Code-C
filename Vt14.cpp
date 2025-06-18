#include <stdio.h>

void gt(int a[10000], int n){
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
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
	int max1=a[0]*a[1];
	int max2=a[n-1]*a[n-2];
	if(max1>max2) printf("%d", max1);
	else printf("%d", max2);
	return 0;
}
