#include<iostream>
#include<math.h>
using namespace std;

bool is(int& num)
{
	int a[3];
	int t=num;
	int i=0;
	while(t!=0)
	{
		a[i++]=t%10;
		t/=10;
	}
		if( num == pow((double)(a[0]),3.0)+pow((double)(a[1]),3.0)+pow((double)(a[2]),3.0) )
			return true;
		else
			return false;
}


int main()
{
	for(int i=100; i<=999; i++)
		if(is(i))
			cout<<i<<endl;
	return 0;
}

