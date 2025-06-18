#include <stdio.h>

void USCLN2(long *a, long b) {
    long temp;
    while (b != 0) {
        temp = *a % b;
        *a = b;
        b = temp;
    }
}

int main() {
    long a, b, r;
    
    scanf("%ld%ld", &a, &b);
    if (a > 0 && b > 0) 
	{
        r = a;
        USCLN2(&a, b);
        printf("%ld\n%lld", a, (long long) r*b/a);
    }
    return 0;
}
