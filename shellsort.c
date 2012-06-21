#include<stdio.h>
#define max 15
int sort(int,int,int);
int a[max],b[max];
int n;
int main()
{
  int i,incr,j,insave;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 incr=n/2;
 while(incr>=1)
 { 
  i=0;
   while(i<incr)
     {
       j=0;
       insave=incr;
       b[j]=a[i];
       j++;
       while(i+insave<n)
	  {
	     b[j]=a[i+insave];
	     j++;
	     insave=insave+incr;
	   }
       sort(i,incr,j-1);
       i++;
      }
   incr=incr/2;
  }
 printf("\nSorted list is ");
 for(i=0;i<n;i++)
 	printf("%d ",a[i]);  
 printf("\n");
 return 0;
}

int sort(int i,int incr,int j)
{
 
 int k,l,t;
 for(k=1;k<=j;k++)
    {
     t=b[k];l=k-1;
     while(t<b[l]&&l>=0)
     	{
     	 b[l+1]=b[l];
     	 l--;
     	}
     b[l+1]=t;
     }
 for(k=0,l=i;k<=j;k++,l=l+incr)
	a[l]=b[k];
 return 0;
}  
