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
	int max1=a[0], max2=a[1];
	int count1=0, count2=0;
	for(int i=0; i<n; i++){
		if(a[i]>max1){
			max1=a[i];
			count1=i;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]>max2&&a[i]<max1){
			max2=a[i];
			count2=i;
		}
	}
	if(count1>count2) printf("%d %d",max1, max2);
	else printf("%d %d", max2, max1);
	return 0;
}
