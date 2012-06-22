#include<stdio.h>
#include<stack>
using namespace std;

struct node
{
	 char c;
	 int l,r;
};
node tree[1001];
void preorder(int p)
{
	cout<<tree[p].c;
	if(tree[p].l)
		preorder(tree[p].l);
	if(tree[p].r)
		preorder(tree[p].r);
}
int main()
{
	int n;
	while(cin>>n)
	{
		int head=0;
		for(int i=0; i<n; i++)
		{
			int index;
			cin>>index;
			cin>>tree[index].c>>tree[index].l>>tree[index].r;
			head=head^index^tree[index].l^tree[index].r;
		}
		preorder(head);
		cout<<endl;

	}
	return 0;
}
