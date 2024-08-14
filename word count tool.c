#include<stdio.h>

void main()
{
	char str[100];
	int line=0,word=0,ch=0,i;
	printf("enter line of string");
	scanf("%[^*]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n')
		{
		line++;	
		}
		if(str[i]=='\n'&&str[i+1]!='\n'|| str[i]==' '&&str[i+1]!=' '||str[i]=='\t'&&str[i+1]!='\t')
		word++;
	}
	printf("%d is the total line\n",line);
	printf("%d is the total character\n",ch);
	printf("%d is the total word\n",word);
}
