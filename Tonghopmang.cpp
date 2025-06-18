#include <stdio.h>

void gt(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int check_chan(int n){
	if(n%2!=0) return 0;
	else return 1;
}

int main(){
	int n,a[100];
	scanf("%d", &n);
	gt(a,n);
	int sum=0, count=0, max=0;
	for(int i=0; i<n; i++) sum+=a[i];
	for(int i=0; i<n; i++){
		if(check_chan(a[i])) count++;
	}
	for(int i=0; i<n; i++){
		if(a[i]> 0&&i>max) max=i;
	}
	if(max==0) printf("%d %d 0", sum, count);	
	else printf("%d %d %d", sum, count, a[max]);
	return 0;
}
