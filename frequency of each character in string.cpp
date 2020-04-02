#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str="amnbamnbamnbamnbamnb";
  map<char,int>mp;
  int count=0;
  map<char,int>::iterator itr;
  for(long i=0;i<str.length();i++)
  {
    mp[str[i]]++;  	
  }	
  for(itr=mp.begin();itr!=mp.end();itr++)
  {
  	cout<<itr->first<<" "<<itr->second<<endl;
  	if((itr->second)>1)
         count++;
  }
  if(count>=2)
  {
  	printf("It have atleast one repeated substring");
  }
}
