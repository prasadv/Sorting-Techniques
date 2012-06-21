#include<stdio.h>
#define max 15
int pivot(int,int);
int quicksort(int,int);
int a[max],n;
int main()
{
 int i;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 quicksort(0,n-1);
 printf("\nThe sorted list is\n");
 for(i=0;i<n;i++)
 	printf("%d ",a[i]);
 printf("\n");
 return 0;
}

int pivot(int low,int high)
{
 int piv,pos,i,t,k,j;
 pos=low;
 i=high;
 j=pos;
 while(j<i)
 {
     while(a[i]>a[pos])
	{
	  i--;
	  if(i==j)	return pos;
	}
	t=a[i];
        a[i]=a[pos];
        a[pos]=t;
     j=pos+1;
     pos=i;
	
     while(a[j]<a[pos])
	{	
	  j++;
	  if(i==j)	return pos;
	}
	t=a[j];
        a[j]=a[pos];
        a[pos]=t;
      i=pos-1;
      pos=j;
}
return pos;
}
 
int quicksort(int low,int high)
{
 int p;
 if(low<high)
  {
   p=pivot(low,high);
   quicksort(low,p-1);
   quicksort(p+1,high);
  }
  return 0;
}
