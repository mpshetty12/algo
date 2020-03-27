#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n,i,s=0;
	cin>>n;
	cout<<"enter one less than you enetered total number (fron 1 to --)"<<endl;
	for(i=0;i<n-1;i++)
	{
		cin>>arr[i];
		s=s+arr[i];
	}
	int p=((n*(n+1))/2)-s;
	
	cout<<p;
	
	return 0;
}
