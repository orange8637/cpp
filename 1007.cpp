#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    while(true)
    {
    int col;
    cin>>col;
    if(col==0) break;
    char mes1[201];
    cin>>mes1;
    int row=strlen(mes1)/col;
    char m[100][20];
    for(int i=0,p=0,q=0;i<strlen(mes1);i++)
        {
        if(p%2==0)
            {
            m[p][q++]=mes1[i];
            if(q==col)
                p++,q--;
            }
        else
            {
            m[p][q--]=mes1[i];
            if(q==-1)
                p++,q++;
            }
        }

    char mes2[201];
    for(int i=0,k=0;i<col;i++)
        for(int j=0;j<row;j++)
        mes2[k++]=m[j][i];
    for(int i=0;i<strlen(mes1);i++)
        cout<<mes2[i];
    cout<<endl;
    }
    return 0;
}
                                 
