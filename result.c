#include<stdio.h>

void main(){
	int a, b, c, d, e;
	float h;
	printf("Enter marks\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	h = ((a+b+c+d+e)/500.0)*100;

	if(h>=80 ){
		printf(" Congratulations:Distinction\n");
	}
	else if(h>=60 && h<80){
		printf("First Division\n");
	}
	else if(h>=50 && h<60){
		printf("second Division\n");
	}
	else if(h>=35 && h<50){
        printf("Third Division\n");
    }
        else{
                printf("Fail!\n");

}
}
