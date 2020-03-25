
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum,k,d=0;
    int p=5;

    for(int i=1;i<=n;i++)
    {
      d=p;
      k=d/2;
      p=k*3;
      sum=sum+k;
    }
    printf("%d",sum);
}
