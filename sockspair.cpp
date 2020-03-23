#include<iostream>
using namespace std;

int main()
{
  int n,m,l=0;
  cout<<"Number of socks\n";
  cin>>n;
  cout<<"Enter socks colors\n";
  string *ar=new string[n];
  for(int i=0;i<n;i++)
  {
  	cin>>ar[i];
  }
  int s=0;
  string *ab=new string[n];
  int flag=0;
  for(int i=0;i<n;i++)
  {
  	flag=0;
  	  for(int k=0;k<l;k++)
		 {
		 	if(ar[i]==ab[k])
		 	  flag=1;
		 }	
    if(flag==0)
	{
	int count=1;	 
  	for(int j=i+1;j<n;j++)
  	{
  	  if(ar[i]==ar[j])
  	     count++;
	}
	 s=s+(count%2);
	 ab[l++]=ar[i];
    }
  }
  cout<<"total non pairs are "<<s;
  return 0;
}
