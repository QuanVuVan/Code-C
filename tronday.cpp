#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n-1; j++){
				if(a[j]>a[j+1]){
					int temp1=a[j];
					a[j]=a[j+1];
					a[j+1]=temp1;
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n-1; j++){
				if(b[j]<b[j+1]){
					int temp2=b[j];
					b[j]=b[j+1];
					b[j+1]=temp2;
				}
			}
		}
		int c[n+n];
		int count1=0, count2=0;
		for (int i=0; i<2*n; i++) {
            if (i%2==0){
                c[i] = a[count1++];
            } else{
                c[i] = b[count2++];
            }
        }
        printf("Test %d:\n", i);
        for(int i=0; i<2*n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
	}
	return 0;
}
