#include<stdio.h>
int mergesort(int,int);
int merge(int,int,int);
#define max 50
int a[max];
int n;
int main()
{
 int i;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 mergesort(0,n-1);
 printf("\nThe sorted list is\n");
 for(i=0;i<n;i++)
 	printf("%d ",a[i]);
 printf("\n");
 return 0;
}

int mergesort(int low,int high)
{
 int mid;
 if(low!=high)
  {
   mid=(low+high)/2;
   mergesort(low,mid);
   mergesort(mid+1,high);
   merge(low,high,mid);
  }
 return 0;
}

int merge(int low,int high,int mid)
{
 int b[max];
 int i,j,k;
 i=low;
 j=mid+1;
 k=0;
  while(i<=mid&&j<=high)
     {
        if(a[i]<a[j])
   	  {
   	   b[k]=a[i];
   	   i++;
   	   k++;
   	  }
        else
   	 {
   	  b[k]=a[j];
   	  j++;
   	  k++;
   	 }
    }
 if(i>mid)
  	{
  	 for(i=j;i<=high;i++,k++)
  	 b[k]=a[i];
  	}
 else
   if(j>high)
    	{
    	 for(j=i;j<=mid;j++,k++)
    	 b[k]=a[j];
    	 }
 for(i=low,k=0;i<=high;i++,k++)
    	a[i]=b[k];
  return 0;
}	
   
   	 
