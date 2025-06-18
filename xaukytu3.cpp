#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char c[]="28tech123@@@AAABBB";
	int lower=0, upper=0, digit=0, alpha=0;
	for(int i=0; i< strlen(c); i++){
		if(isdigit(c[i])){
			++digit;
		}
		else if(islower(c[i])){
			++lower;
		}
		else if(isupper(c[i])){
			++upper;
		}
		if(isalpha(c[i])){
			++alpha;
		}
	}
	printf("%d %d %d %d", digit, lower, upper, alpha);
}
