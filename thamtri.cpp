#include <stdio.h>

int USCLN(int a, int b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int main()
{
	long a, b, r;
	
	scanf("%ld %ld",&a, &b);
	if(a> 0 && b>0)
	{
		r = USCLN(a,b); 
		printf("%ld\n%lld", r, (long long) a*b/r);
	}
	return 0;
}
