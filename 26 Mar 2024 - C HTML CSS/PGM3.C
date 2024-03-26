#include<stdio.h>
int main(){
	int a,b,*ptr1,*ptr2,temp;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("Enter the two numbers::");
	scanf("%d%d",&a,&b);
	
	temp=*ptr1;
	
	*ptr1=*ptr2;
	
	*ptr2=temp;
	
	printf("%d\n",*ptr1);
	printf("%d",*ptr2);	
}
