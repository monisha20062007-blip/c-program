#include<stdio.h>
int main(){
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	int sum=a+b;
	if (sum %2==0){
	printf("%d is an even number\n");
	}else
	printf("%d is an odd number\n");
	return 0;
}