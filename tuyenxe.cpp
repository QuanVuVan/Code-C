#include <stdio.h>
#include <math.h>

int a[100001];

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);   
    }
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		quickSort(a,0, n-1);
//		for(int i=0; i<n; i++){
//			for(int j=0; j<n-1; j++){
//				if(a[j]>a[j+1]){
//					int temp=a[j];
//					a[j]=a[j+1];
//					a[j+1]=temp;
//				}
//			}
//		}
		int max1=a[n-1];
		int max2=0;
		for(int i=n-2; i>=0; i--){
			if(a[i]<a[n-1]){
				max2=a[i];
				break;
			}
		}
		int min1=a[0];
		int min2=0;
		for(int i=1; i<n; i++){
			if(a[i]>a[0]){
				min2=a[i];
				break;
			}
		}
		int distance=0;
		if(abs(min1-min2)< abs(max1-max2)){
			distance=abs(min1-min2);
		}
		else distance=abs(max1-max2);
		int count=0;
		for(int i=n-1; i>=0; i--){
			for(int j=i-1; j>=0; j--){
				if(abs(a[i]-a[j])==distance){
					count++;
				}
			}
		}
		printf("%d %d\n", distance ,count);
	}
	return 0;
}
