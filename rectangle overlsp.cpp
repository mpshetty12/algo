#include<bits/stdc++.h>
using namespace std;
struct Point{
	int x,y;
};
bool doOverlap(Point l1,Point r1,Point l2,Point r2)
{
	if(l1.x>r2.x || l2.x>r1.x)
	   return false;
	if(l1.y<r2.y || l2.y<r1.y)
	   return false;
	   
	return true;
}
int main()
{
	Point l1={0,10};
	Point r1={10,0};
	Point l2 ={5,15};
	Point r2={15,0};
	if(doOverlap(l1,r1,l2,r2))
	  cout<<"Overlap";
	else
	{
		cout<<"End the overlap";
	}
	return 0;
}
