#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
	str=str+" ";
  string sp=" ";
  int i=0;
  while(i<=str.length())
  {
  	
    if(str[i]==' ')
	{
      cout<<sp<<"-->";
      stringstream s(sp);
      char word;
      while(s>>word)
      {
      	int p=word-NULL;
      	cout<<word<<"->"<<p<<"  ";
	  }
	  cout<<endl;
	  sp=" ";		
    }  	
    else
    {
    	sp=sp+str[i];
	}
	i++;
  }	
}
int main()
{
	string str="shiva shetty kumar";
	reverse(str);

	return 0;
}
