#include<stdio.h>
#define max 15
int a[max],n;
int insert();
int swap(int,int);
int sort();
int maxchild(int,int);

int main()
{
 insert();
 sort();
 return 0;
}

int swap(int m,int n)
{
 int t;
 t=a[m];
 a[m]=a[n];
 a[n]=t;
 return 0;
}

int insert()
{
 int i,p;
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
   {
     p=i;
     scanf("%d",&a[i]);
     while(p!=0)
     {
      if(a[(p-1)/2]<a[p])	
     	{
     	 swap((p-1)/2,p);
     	 p=(p-1)/2;
     	}
      else break;
     }
   }
  printf("\nHeap is\n");
  for(i=0;i<n;i++)
  	printf("%d ",a[i]);
  printf("\n");
  return 0;
}

int maxchild(int m,int n)
{
 if(a[m]>=a[n])	return m;
 else
 	return n;
 }
 
int sort()
{
 int i,m,p=n-1,pos;
 for(i=0;i<n;i++)
  {
    pos=0;
    swap(0,p);
    while(p>2*pos+1)
    {
      if(p==2*pos+2)	
      		{
      		 if(a[pos]<a[2*pos+1])
      		 	{
      		 	swap(pos,2*pos+1);
      		 	pos=2*pos+1;
      		 	}
      		 else break;
      		 }
      else 		
	      {
	        m=maxchild(2*pos+1,2*pos+2);
	        if(a[pos]<a[m])	
	        {
		 swap(pos,m);
		 pos=m;
	        }
	        else break;
	      }
     }
    p--;
  }
  printf("\nThe sorted list is \n");
  for(i=0;i<n;i++)
  	printf("%d ",a[i]);
  printf("\n");
  return 0;
}  
    
