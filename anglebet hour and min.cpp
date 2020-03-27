#include<bits/stdc++.h>
using namespace std;
int minut(int a,int b)
{
	return (a<b)?a:b;
}
int main()
{
  float hour,minute;
  cout<<"Enter hour\n";
  cin>>hour;
  if(hour==12)
     hour=0;
   if (minute==60)
     minute=0; 
  hour=hour*30;
  cout<<"Enter minute\n";
  cin>>minute;
  float min=minute*6;
  hour=hour+(minute*0.5);
 
  int angle=abs(hour-min);
  angle=minut(360-angle,angle);
  cout<<angle<<" degree";
  return 0;
}
