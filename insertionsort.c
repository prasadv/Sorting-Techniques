#include<stdio.h>
#define max 15
int main()
{
 int a[max];
 int n,i,j,t;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 for(i=1;i<n;i++)
    {
     t=a[i];j=i-1;
     while(t<a[j]&&j>=0)
     	{
     	 a[j+1]=a[j];
     	 j--;
     	}
     a[j+1]=t;
     }
 printf("\nSorted list is \n");
 for(i=0;i<n;i++)
 	printf("%d ",a[i]);
 printf("\n");
 return 0;
 }	
