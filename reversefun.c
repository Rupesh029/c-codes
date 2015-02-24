#include<stdio.h>
#include<string.h>

void reverse(char c[]){
	char r[10];
	int j;
	int i;

	j=strlen(c);
	for(i=0;i<j;i++){
		r[i]=c[j-1-i];
	}
	for(i=0;i<j;i++){
		printf("%c",r[i] );
	}
}

void  main()
{
	char c[10] = "RAM";
	printf("The reverse of %s is:", c);
	reverse(c);
}
