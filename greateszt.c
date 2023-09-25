#include<stdio.h>

int main(){
	int x, y, z;
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter Y: ");
	scanf("%d",&y);
	printf("Enter Z: ");
	scanf("%d",&z);
	
	if(x>y&&x>z){
		printf("X is Grestest.");
		
	}else if(y>z&&y>x){
		printf("Y is Grestest.");
	}else if(z>x&&z>y){
    printf("Z is Grestest.");
	}
	
	
	
}