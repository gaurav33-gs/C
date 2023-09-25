#include<stdio.h>

int main(){
	char alpha;
	printf("Enter letter: ");
	scanf("%c", &alpha);

	if(alpha=='a' || alpha=='e' ||alpha=='i' ||alpha=='o' ||alpha=='u'){
		printf("%c is Vowel.", alpha);
	}else{
		printf("%c is Consonant.", alpha);
	}
}