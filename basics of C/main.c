#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int i,j,k,res,sum,t,n;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    sum=0;
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {
      scanf("%d",&k);
      sum+=k;
    }
    int flag = sum-n;
    (flag==0)? printf("%d\n",0) : (flag>0)? printf("%d\n",flag): printf("%d\n",1); 
  }
  
}    