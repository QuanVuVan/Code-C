#include <stdio.h>

//nhap phan tu trong mang
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
	int sum=0,bien=0;
	for(int i=0; i<n; i++){
		if(a[i]%2!=0){
			sum+=a[i];
			bien++;
		} 
	}
	printf("%.4lf", (double)sum/bien);
	return 0;
}

