#include<stdio.h>
#define max 15
int main()
{
 int a[max];
 int n,i,j,t,min,minpos;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;++i)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 	{
 	min=a[i];minpos=i;
 	for(j=i+1;j<n;++j)
		 if(a[j]<min)	
		 {
		  min=a[j];
		  minpos=j;
		 }
	t=a[i];
	a[i]=min;
	a[minpos]=t;
	}
printf("\nSorted list \n");
for(i=0;i<n;++i)
	printf("%d ",a[i]);
printf("\n");
return 0;
}
	
 	 
 	   
 	     
