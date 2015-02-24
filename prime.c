#include<stdio.h>

void main(){

	int i,j,k;
	for(i=2;i<50;i++){

		k=0;
			for(j=2;j<i;j++){
				if(i%j==0){
					k++;
					break;
				}
			}
			if(k==0){
				printf("%d\n", i);
			}

	}
}
