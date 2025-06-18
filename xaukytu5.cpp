#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//strtok:tach tu

int main(){
	char c[1000];
	gets(c);
	char a[100][100];
	int n=0;
	char* token=strtok(c, " ");
	while(token != NULL){
//		printf("%s\n", token);
//		token =strtok(NULL, " ");
		strcpy(a[n], token);
		n++;
		token= strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		printf("%s ", a[i]);
	}
	return 0;
}
