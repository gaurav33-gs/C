#include<stdio.h>

int main(){
	int digit;
	printf("Enter a Number: ");
	scanf("%d", &digit);
	
	if(digit==0){
		printf("Entered Value is Zero.");
	}else if(digit>0){
		printf("Entered Value is Positive.");
	}else{
		printf("Entered Value is Negative.");
	}
}