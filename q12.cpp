#include <stdio.h>
int main() {
	int number;
    int lastdigit;
    printf("Enter an integer number:");
    scanf("%d",&number);
    lastdigit=number %10;
        if (lastdigit % 2 == 0) 
            printf("%d is even\n",lastdigit);
            printf("%d is odd\n", lastdigit);
    }




    

