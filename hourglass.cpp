#include<iostream>
using namespace std;

int main()
{
	int n,sum,result=-9999;
	cin>>n;
	int **c=new int*[n];
	for(int i=0;i<n;i++)
	{
		c[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>c[i][j];
		}
	}
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
		   sum=c[i][j]+c[i][j+1]+c[i][j+2]+c[i+1][j+1]+c[i+2][j]+c[i+2][j+1]+c[i+2][j+2];
		   
		         if(sum>result)
		              result=sum;
		}
	}
	cout<<result;
	return 0;
}
