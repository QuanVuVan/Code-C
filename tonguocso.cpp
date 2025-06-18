#include <stdio.h>
#include <math.h> 

int sum_digits(int num) {
    int sum = 0;
    if (num == 0) return 0; 
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) { 
        int N;
        scanf("%d", &N); 
        int count = 0;
        for (int i = 1; i * i <= N; i++) {
            if (N % i == 0) { 
                if (sum_digits(i) % 3 == 0) {
                    count++;
                }
                if (i * i != N) {
                    if (sum_digits(N / i) % 3 == 0) {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count); 
    }
    return 0;
}
