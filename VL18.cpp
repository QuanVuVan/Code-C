#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeLeadingZeros(char *str) {
    int length = strlen(str);
    int leadingZeros = 0;
    while (leadingZeros < length && str[leadingZeros] == '0') {
        leadingZeros++;
    }
    if (leadingZeros == length) {
        str[0] = '0';
        str[1] = '\0';
    } else {
        for (int i = 0; i < length - leadingZeros; i++) {
            str[i] = str[i + leadingZeros];
        }
        str[length - leadingZeros] = '\0';
    }
}

int main(){
	char c[1000];
	gets(c);
	char *b=strrev(c);
	removeLeadingZeros(b);
	printf("%s", b);
	return 0;
}
