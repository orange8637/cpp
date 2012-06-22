#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count = 0;
        list<string> a;
        for(int i = 0 ; i < n; i++)
        {
            string x;
            cin>>x;
            string dna=x;
            for(int j = 0; j < x.length() ; j++)
            {
				if(x[j]=='A') dna[j]='T';
				if(x[j]=='T') dna[j]='A';
				if(x[j]=='G') dna[j]='C';
				if(x[j]=='C') dna[j]='G';
            }
		    if(find(a.begin(),a.end(),dna) != a.end())
			 { 
				 count++;
				 a.erase(find(a.begin(),a.end(),dna));
			 }
          else
            a.push_back(x);

        }
        cout<<count<<endl;
    }
    return 0;
}          
