#include<stdio.h>
int t=0;
int merge(long long a[],int b,int m,int c)    //to merge the two arrays
{
	int e,f,g;
	int llen=m-b+1;        //length of the left array
	int rlen=c-m;          //length of the right array
	long long l[llen];
	long long r[rlen];
	for(e=0;e<llen;e++)     //inserting into the left and right array
	{
		l[e]=a[b+e];
	}
	for(f=0;f<rlen;f++)
	{
		r[f]=a[m+1+f];
	}
	e=0;
	f=0;
	g=b;
	while(e<llen && f<rlen)  //condition for inserting the elements in two arrays into the unsorted array
	{
		if(l[e]<=r[f])
		{
			a[g]=l[e];
			e++;
			g++;
		}
		else
		{
			a[g]=r[f];
			f++;
			g++;
		}
	}
	while(e<llen)    //if some elements are left in any of the two array then this is the condition to insert
	{
		a[g]=l[e];
		e++;
		g++;
	}
	while(f<rlen)
	{
		a[g]=r[f];
		g++;
		f++;
	}
	t+=1;    //count will increase for every time merge is used
	return 0;
}
void main(void)
{
	printf("Nwe");
}

