#include <stdio.h>

int main(){
	int num, count;
	scanf("%d %d", &num, &count);
	while(num>=0){
		int mod=num%10;
		int next=num/10;
		if(mod>0){
			while(mod>0){
				mod-=1;
				count--;
				if(count==0){
	
					break;
				}
			}
			num=next;
		}
		else if(mod==0){
			num=next;
			count--;
			if(count==0) break;
		}
	}
	printf("%d", num);
	return 0;
}
