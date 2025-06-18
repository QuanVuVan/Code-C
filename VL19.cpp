#include <stdio.h>

int check_3(int a){
	return(a%3==0);
}

int main(){
	int a,b;
	int found=0;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("NOT FOUND");
		return 0;
	}
	for(int i=b-1; i>a; i--){
		if(check_3(i)){
			printf("%d ", i);
			found=1;
		}
	}
	if(!found) printf("NOT FOUND");
	return 0;
}
