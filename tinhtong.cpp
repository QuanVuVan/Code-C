#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum=0;
	if(n<=0){
		printf("NO");
		return 0;
	}
	for(int i=1; i<=n; i++){
		sum+=i;
	}
	printf("%d", sum);
	return 0;
}
