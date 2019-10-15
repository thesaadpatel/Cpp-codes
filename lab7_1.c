#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char *s;
	char *final;
	s=(char*)malloc(10*sizeof(char));
	final=(char*)malloc(10*sizeof(char));
	for(int i=0;i<3;i++)
	{
		scanf("%s",s);
		*(final+i)=*(s+i);
		free(s);
	}
	printf("%s",final);
	return 0;	
}
