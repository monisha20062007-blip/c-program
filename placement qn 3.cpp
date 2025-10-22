#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp=n,res=0;
	while(temp!=0){
		int last = temp%10;
		res=res*10+last;
		temp/=10;
	}
	if(res==n)
	    printf("palindrome");
	else
	    printf("not palindrom");
	return 0;    
	}
