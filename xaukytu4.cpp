#include <stdio.h>
#include <string.h>

int main(){
	char c[]= "28TECH";
	strlwr(c);
	printf("%s\n", c);
	//so sanh 2 sau
	char d[]="abcd";
	char e[]="abc";
	printf("%d\n", strcmp(d,e));
	//noi xau
	char f[]="PTIT ";
	char g[]="developer";
	strcat(f, g);//noi d vao c
	printf("%s\n", f);
	//copy xau
	char k[]="aaa";
	char j[]="PTIT";
	strcpy(k,j);
	printf("%s\n", k);
	//ham lat nguoc
	char t[]="1230";
	strrev(t);
	printf("%s\n", t);
	//ham strstr: ham kiem tra sau con
	char a2[]="PTIT developer";
	char a3[]="IT";
	char *check=strstr(a2,a3);
	if(check==NULL) printf("Not found\n");
	else printf("%s\n", check);
	//ham memset de gan gia tri 0 hoac -1 cho cac o nho 
	int z[]={1, 2, 3, 4, 5};
	memset(z, 0, sizeof(z));
	for(int i=0; i<5; i++){
		printf("%d ", z[i]);
	}
	
	
}
