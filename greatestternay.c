#include<stdio.h>

int main(){
	int x, y, z;
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter Y: ");
	scanf("%d",&y);
	printf("Enter Z: ");
	scanf("%d",&z);
	
	x>y? (x>z ?printf("X is Greatest."): printf("Z is Greatest")):(y>z ? printf("Y is Greatest."): printf("Z is Greatest."));
	
	
}

