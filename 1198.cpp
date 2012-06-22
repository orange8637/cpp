#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(string a, string b)
{
	return a+b < b+a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[8];
		for(int i=0; i<n; i++)
			cin>>s[i];
		sort(s,s+n,cmp);
		for(int i=0; i<n; i++)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}
