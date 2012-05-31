/*
* Filename: 1146.cpp
* Last modified: 2012-05-31 20:26
* Author: Chen Jiang(姜晨) -- orange8637@gmail.com
* Description: 01背包问题
*/
#include<iostream>
using namespace std;

int main()
{
	int M,T;//M 种类，T 最大时间
	int t[101];//每种所花时间
	int v[101];//每种价值
	int opt[101][1001];//选取策略
	scanf("%d%d",&T,&M);
	for(int i=1; i<=M; i++)
	{
		scanf("%d%d",&t[i],&v[i]);
	}
	for(int i=1; i<=M; i++)
		for(int j=1; j<=T; j++)
		{
			if(j<t[i])
				opt[i][j]=opt[i-1][j];
			else
				opt[i][j]=max(opt[i-1][j],opt[i-1][j-t[i]]+v[i]);
		}
	printf("%d\n",opt[M][T]);
	return 0;
}
