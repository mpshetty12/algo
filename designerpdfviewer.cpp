#include<bits/stdc++.h>
using namespace std;
int main()
{
  int *arr=new int[26];
  for(int i=0;i<26;i++)
  {
      cin>>arr[i];
  }
  string str;
  cin>>str;
  int lent=str.length();
  stringstream s(str);
  char word;
  int p,j=0,max=0;
 // int *ar1=new int[len];
  while(s>>word)
  {
    p=(word-NULL)-97;
   // ar1[j++]=arr[p];
    if(arr[p]>max)
    {
       max=arr[p]; 
    }
  }
  cout<<max*lent;
}
