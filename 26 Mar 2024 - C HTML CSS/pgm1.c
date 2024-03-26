#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,sum;
	int *ptr1,*ptr2;
	
	printf("Enter the numbers::");
	scanf("%d %d",ptr1,ptr2);
	
	sum= *ptr1 + *ptr2;
	
	printf("%d",sum);
	
	return 0;
}
