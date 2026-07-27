#include<stdio.h>
int main()

{
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
		printf("upper case");
	}
	else
	{
	    printf(" lower case");	
	}
}