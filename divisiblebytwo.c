#include<stdio.h>

void main(){
	int i;
	printf(" Enter a number\n");
	scanf("%d",&i);
	if(i%2==0){
		printf("%d is divisible by 2\n",i );
	}
	else{
		printf("%d is not divisible by 2\n",i );
	}
}