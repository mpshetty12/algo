#include<bits/stdc++.h>
using namespace std;
int *getCharCountArray(char *str)
{
	//int *count = (int *)calloc(sizeof(int),NO_OF_CHARS);
	cout<<str;
	
	int *count=new int[256];
	int i;
	for(i=0;*(str+i);i++)
	{
		count[*(str+i)]++;
	}
	return count;
}
int firstNonrepeating(char *str)
{
	 int *count=getCharCountArray(str);
	 int index=-1,i;
	 for(i=0;*(str+i);i++)
	 {
	 	if(count[*(str+i)]==1)
	 	{
	 	  index=i;
		  break;	
		}
	 }
	 free(count);
	 return index;
}
int main()
{
	char str[] = "geeksforgeeks";
	int index = firstNonrepeating(str);
	if(index==-1)
	{
	  printf("NO ");
	}
	else
	{
	   printf("yes it is %c",str[index]);
	}
	return 0;
}
