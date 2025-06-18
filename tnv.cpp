#include <stdio.h>

void gt(int a[], int m){
	for(int i=0; i<m; i++){
		scanf("%d", &a[i]);
	}
}

int cnt[1000001];
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	gt(a,n);
	for(int i=0; i<n; i++){
		cnt[a[i]]++;
	}
	int max=cnt[a[0]];
	int b=0;
	for(int i=0; i<n; i++){
		if(cnt[a[i]]>max){
			max=cnt[a[i]];
			b=a[i];
		}
	}
	printf("%d %d", b, max);
	return 0;
}
