#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n,max;
	scanf("%d %d", &n, &max);
	int a[n];
	gt(a,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	int sum=0, giu_gt=0;
	for(int i=n-1; i>=0; i--){
		sum+=a[i];
		if(sum<=max){
			giu_gt=sum;
		}
	}
	printf("%d", giu_gt);
	return 0;
}
//quy hoach dong...
