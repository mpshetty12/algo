#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string *st=new string[10];
	char *ch=new char[20];
	int n,m=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>st[i];
		string pp=st[i];
		for(int j=0;j<st[i].length();j++)
		{
			int flag=0;
			for(int k=0;k<m;k++)
			{
				if(pp[j]==ch[k])
				   flag=1;
				   flag=1;
			}
			if(flag==0)
			{
			  ch[m++]=pp[j];	
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<ch[i];
	}
	
	return 0;
}
