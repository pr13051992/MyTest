#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("Negative");	
	}
	else if(n>0){
		printf("positive");	
	}
	else{
		printf("zero");		
	}
	return 0;
}

