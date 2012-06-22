#include<iostream>
#include<stack>
using namespace std;

int couples[200001];

int main()
{
    while(true)
    {
        int n;
        cin>>n;
        if(n == 0)
            break;
        stack<int> my;
        for(int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;
            couples[a] = b;
            couples[b] = a;
        }
        for(int i = 1; i <= n*2; i++)
        {
            if(!my.empty()  && my.top() == couples[i])
                my.pop();
            else
                my.push(i);
        }
        if(my.size()==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}                                 
