/*
* Filename: hanoi.cpp
* Last modified: 2012-05-30 18:47
* Author: Chen Jiang(姜晨) -- orange8637@gmail.com
* Description: 汉诺塔问题
*/
#include<stdio.h>
using namespace std;

void move(int n, char from, char to, char aux)
{
    if(n==1)
    {
        printf("move %d from %c to %c\n", n, from ,to);
    }
    else
    {
        move(n-1, from, aux, to);
        printf("move %d from %c to %c\n", n, from, to, aux);
        move(n-1, aux, to, from);
    }
}
int main()
{
        int n;
        scanf("%d",&n);
        move(n,'a','c','b');
		return 0;
		
}
