#include <stdio.h>

//nhap gia tri cho mang
void gt(int a[10000], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int a[10000];
	char kitu=' ';
	int count=0,sai=1;
	
	for(int i=0; kitu != '\n' && i<10000 ; i++){
		scanf("%d%c", &a[i], &kitu);
		count++;
	}
	for(int i=0; i<count; i++){
		if(a[i]<0){
			printf("%d ", a[i]);
			sai=0;
		}
	}
	if(sai!=0) printf("NOT FOUND");
	return 0;
}
