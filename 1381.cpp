#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

bool bigger(string s1, string s2)
{
	if(s1.length() > s2.length())
		return true;
	else if(s1.length() == s2.length() && s1 >= s2)
		return true;
	else 
		return false;
}
string clzero(string s)
{
	while(s.length() > 0 && s[0]=='0')
		s.erase(0,1);
	if(s=="")
		s="0";
	return s;
}
string addition(string s1, string s2)
{
	string result;
	int i;
	while(s1.length() < s2.length())
		s1='0'+s1;
	while(s2.length() < s1.length())
		s2='0'+s2;
	s1='0'+s1;
	s2='0'+s2;
	for(int i=s1.length()-1; i>=0; i--)
	{
		s1[i]=s1[i]+s2[i]-'0';
		if(s1[i]>'9')
		{
			s1[i]-=10;
			s1[i-1]++;
		}
	}
	result=clzero(s1);
	return result;
}
string multiply(string s1, string s2)
{
	int i;
	char c;
	string result="0";
	for(i=s2.length()-1; i>=0; i--)
	{
		for(c='1'; c<=s2[i]; c++)
			result=addition(result,s1);
		s1=s1+'0';
	}
	result=clzero(result);
	return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string a,b;
	cin>>a>>b;
	string c=multiply(a,b);
	cout<<c<<endl;
	}
	return 0;
}
