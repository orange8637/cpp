#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[100];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        char x[400];
        cin>>x;
        int res[100];
        for(int i = 0; i < n; i++)
        {
            int temp = 0;
            for(int j = 0; j < strlen(x); j++)
            {
                temp *= 10;
                temp += (x[j]-'0');
                temp %= a[i];
            }
            res[i] = temp;
        }
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
                cout<<"("<<res[i];
            else
                cout<<","<<res[i];
        }
        cout<<")";
        cout<<endl;
    }
    return 0;
}                                 
