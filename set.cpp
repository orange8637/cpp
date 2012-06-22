#include<iostream>
#include<set>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
#include<math.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int cn=0;
int dn=0;
void bing(int *a, int *b, int *c,int an, int bn)
{
	int i=0;
	int j=0;
	int k=0;
	while(i<an && j<bn)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];i++;k++;
		}
		else if(b[j]<a[i])
		{
			c[k]=b[j];j++;k++;
		}
		else
		{
			c[k]=a[i];
			i++;j++;k++;
		}
	}
	while(i<an)
	{
	c[k]=a[i];i++;k++;
	}
	while(j<bn)
	{
	c[k]=b[j];j++;k++;
	}
	cn=k;
}
void jiao(int *a, int *b, int *d,int an, int bn)
{
	int i=0;
	int j=0;
	int k=0;
	while(i<an && j<bn)
	{
		if(a[i]<b[j])
		{
			i++;	
		}
		else if(b[j]<a[i])
		{
			j++;
		}
		else
		{
			d[k]=a[i];
			i++;j++;k++;
		}
	}
	dn=k;
}

int main()
{
	int a[100],b[100];
	int an,bn;
	scanf("%d",&an);
	for(int i=0; i<an; i++)
		scanf("%d",&a[i]);
	scanf("%d",&bn);
	for(int i=0; i<bn; i++)
		scanf("%d",&b[i]);
	 int c[100],d[100];
	 bing(a,b,c,an,bn);
	 jiao(a,b,d,an,bn);
	 for(int i=0; i<cn; i++)
		 cout<<c[i]<<" ";
	 cout<<endl;
	 for(int i=0; i<dn; i++)
		 cout<<d[i]<<" ";
	return 0;
}

