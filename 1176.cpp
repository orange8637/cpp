#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;

int dp[1001][1001];
int a[1001];
int f(int i,int j){
      if(i>j)return 0;
      if(i==j)return a[i];
      if(dp[i][j]!=-1)return dp[i][j];
      int max1 = a[i] +(a[i+1]>=a[j]?f(i+2,j):f(i+1,j-1));
      int max2 = a[j] +(a[i]>=a[j-1]?f(i+1,j-1):f(i,j-2));
      dp[i][j] = max1 > max2? max1 : max2;
      return dp[i][j];
}
int main(){
    int n;
    int num = 0;
    while(scanf("%d",&n),n!=0){
        num++;
        int sum = 0;
         memset(dp,-1,sizeof(dp));
         for(int i = 1; i <=n;++i){
             scanf("%d",&a[i]);
             sum+=a[i];
         }
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",num,2*f(1,n)-sum);
    }
    return 0;
}
