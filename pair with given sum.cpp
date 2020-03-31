#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	int n,s,c=0;
	cin>>n;
	cin>>s;
	int *ar=new int[10];
	for(int i=0;i<n;i++)
	{
	  cin>>*(ar+i);
	}
	sort(ar,ar+n);
    int low=0,high=n-1;
    while(low<high)
    {
       if(ar[low]+ar[high]==s)
	       {
	         cout<<ar[low]<<"and"<<ar[high]<<"are pairs"<<endl;
	         c++;
		   }	
	    (ar[low]+ar[high])<s?low++:high--;
	}
	if(c==0)
	cout<<"Pair not found\n";
	return 0;
}
