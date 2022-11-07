#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ss=0,ch;
	int i,cc=0,wc=1,lc=1;
	printf("Enter the string : ");
	scanf("%s",&ss);
	printf("Enter the position of the character:");
	scanf("%c",ch);
	for(i=0;ss[i]!='\0';i++)
	{
		if(ch==ss[i])
		{
			printf("character found at %d",(i+1));
			getch()
		}
	}
	printf("character not found -1");
}
