#include <stdio.h>

int main(){
	int a[10];
	int bien=0,gt=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	int target;
	scanf("%d", &target);
	for(int i=0; i<10; i++){
		if(a[i]==target){
			bien=i+1;
			printf("%d ", bien);
			gt=1;
		}
	}
	if(gt!=1) printf("-1");
	return 0;
}
