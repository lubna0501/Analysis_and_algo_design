// PROGRAM TO FIND WHETHER GIVEN STRING IS CONSTANT OR NOT
 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i,flag;
	char a[5];
	puts("Enter the value :: ");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(isdigit(a[i]))
		flag=1;
		else
		{
			flag=0;
			break;
		}
	}
if(flag==1)
puts("Value is constant");
else
puts("Value is a variable");
getch();
}

