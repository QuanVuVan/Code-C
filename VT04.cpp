#include <stdio.h>

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
	if(count >=1) printf("YES");
	else printf("NO");
	return 0;
}
