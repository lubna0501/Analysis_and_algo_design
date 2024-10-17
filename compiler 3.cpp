//PROGRAM TO COUNT BLANK SPACE AND COUNT THE NO. OF LINES
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int flag=1;
	char i,j=0,temp[100];
	//clrscr();
	printf("Enter the Sentence (add '$' at the end) :: \n\n");
	while((i=getchar())!='$')
	{
		if(i==' ')
			i=';';
		else if(i=='\t')
			i='"';
		else if(i=='\n')
			flag++;
		temp[j++]=i;
	}
	temp[j]=NULL;
	
	printf("\n\n\nAltered Sentence :: \n\n");
	puts(temp);
	
	printf("\n\nNo. of lines = %d",flag);
	getch();
}
