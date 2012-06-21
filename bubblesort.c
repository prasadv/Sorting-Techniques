#include<stdio.h>
#define max 15
int main()
{
 int a[max];
 int n,i,j,t,xchange;
 printf("\nEnter the no: of elements \n");
 scanf("%d",&n);
 printf("\nEnter elements:\n");
 for(i=0;i<n;++i)
 	 scanf("%d",&a[i]);
 for(i=0;i<n;++i)
  {
  	xchange=0;
 	for(j=0;j<(n-i-1);++j)
 	{
 		if(a[j]>a[j+1])
 		{
 		  t=a[j];
 		  a[j]=a[j+1];
 		  a[j+1]=t;
 		  xchange++;
 		 }
 	}
 	if(xchange==0)	break;
   }
 printf("\nSorted list is : ");
 for(i=0;i<n;++i)
 	printf("%d ",a[i]);
 printf("\n");
 return 0;
 }
