/*
* Filename: 1024.cpp
* Last modified: 2012-06-04 16:24
* Author: Chen Jiang(姜晨) -- orange8637@gmail.com
* Description: 
*/
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<iomanip>
#include<stdio.h>
using namespace std;

template<typename T>
class TN
{
	public:
		TN()
		{
			left=NULL;
			right=NULL;
		}
		TN(T d, TN* l, TN* r)
		{
			data=d;
			left=l;
			right=r;
		}
		TN* left;
		TN* right;
		T data;
};
template<typename T>
class BT
{
	public:
		BT()
		{
			root=NULL;
		}
		TN<T>* root;
		void insert(const T &d, TN* &t)
		{
			if(t==NULL)
				t=new TN(d,NULL,NULL);
			else if(d<t->data)
				insert(d, t->left);
			else if(d>t->data)
				insert(d,t->right);
			else
				;
		}
		void insert(const T &d)
		{
			insert(d,root);
		}
		void print(TN* &t)
		{
			if(t==NULL)
				;
			else
			{
				cout<<t->data<<endl;
				print(t->left);
				print(t->right);
			}
		}
		void print()
		{
			print(root);
		}
};
int main()
{
	BT<char> i;
	i.insert('b');
	i.insert('a');
	i.insert('c');
	i.insert('c');
	i.print();
	return 0;
}
