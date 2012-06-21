#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node* next;
};
struct node* start=NULL;
int n,max;
int insert();
int display();
int digit(int);
int sort();

int main()
{
 insert();
 display();
 sort();
 return 0;
}

int insert()
{
 int v,i;
 max=-9999;
 printf("Enter the number of elements\n");
 scanf("%d",&n); 
 if(n<=0)	return 0;
 struct node *temp,*p;
 printf("Enter elements\n");
 for(i=1;i<=n;i++)
 	{
 	  scanf("%d",&v);
 	  if(v>max)	max=v;
 	  temp=malloc(sizeof(struct node));
 	  temp->info=v;
 	  temp->next=NULL;
 	  if(start==NULL)	start=temp;
 	  else			
 	    {
 	     p=start;
 	     while(p->next!=NULL)	p=p->next;
 	     p->next=temp;
 	    }
 	}
 return 0;
}

int display()
{
 struct node *p;
 if(start==NULL)	{ printf("\nList empty!\n"); return 0;}
 p=start;
 while(p!=NULL)
 	{
 	 printf("%d ",p->info);
 	 p=p->next;
 	}
 return 0;
}

int digit(int num)
{
 int p=0;
 while(num>0)
 	{
 	  num=num/10;
 	  p++;
 	}
 return p;
}
 	 
int sort()
{
 int i,j,p,d,l,no,pos,pos1;
 if(n<=0)	{ return 0; }
 struct node *ptr,*temp,*t,*front[10],*rear[10];
 p=digit(max);
 pos=0;
 while(p>0)
  {
        pos++;
        for(i=0;i<10;i++)
    	 {
          front[i]=NULL;
          rear[i]=NULL;
    	  }
         ptr=start;
         while(ptr!=NULL)
		{
		  pos1=pos;
		  d=(ptr->info);
		  while(pos1>0)
		   {
		    l=d%10;
		    d=d/10;
		    pos1--;
		   }
		  temp=malloc(sizeof(struct node));
		  temp->info=ptr->info;
		  temp->next=NULL;
		  if(front[l]==NULL)
		  	front[l]=temp;
		  else
		    	rear[l]->next=temp;
		    
		    rear[l]=temp;
		    ptr=ptr->next;
		 }
         ptr=start;
         for(i=0;i<10;i++)
          {
            t=front[i];
            while(t!=NULL)
             {
               ptr->info=t->info;
               t=t->next;
               ptr=ptr->next;
             }
           }
        p--;
  }
  printf("\nSorted list is\n");
  ptr=start;
  while(ptr!=NULL)
  	{
  	 printf("%d ",ptr->info);
  	 ptr=ptr->next;
  	}
  printf("\n");
  return 0;
}
          
        
      
