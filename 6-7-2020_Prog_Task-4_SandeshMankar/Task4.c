#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
};
void create(int d,struct Node **n)
{
   struct Node *temp,*r;
   r=*n;
   if(r==NULL)
   {  temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=d;
      *n=temp;
      temp->prev=NULL;
      temp->next=(struct Node*)malloc(sizeof(struct Node));
      temp=temp->next;
      temp->next=NULL;

   }
   else
   {
      temp->next=(struct Node*)malloc(sizeof(struct Node));
      temp->data=d;
      temp->next->prev=temp;
      temp=temp->next;
      temp->next=NULL;
      
   }
}
void insert_at_start(struct Node **n,int d)
{
   struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
   temp->data=d;
   temp->prev=NULL;
   temp->next=*n;
   *n=temp;

   
}
void insert_at_end(struct Node *n,int d)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    struct Node *last=(struct Node *)malloc(sizeof(struct Node));
    while(n->next!=NULL)
    {
       last=n;

       n=n->next;
    }
  last->next=temp;
    temp->data=d;
    temp->prev=last;
    temp->next=(struct Node*)malloc(sizeof(struct Node));
    temp->next->next=NULL;
}
void delete_at_start(struct Node **n)
{   struct Node *i;
    i=*n;
   if(i==NULL)
   printf("Empty Linked List");
   else
   {
     i=i->next;
     *n=i;
   }
   free(i->prev);
}
void delete_at_end(struct Node *n)
{
   struct Node *temp;
   temp=(struct Node*)malloc(sizeof(struct Node));
   while(n->next->next!=NULL)
   {
      n=n->next;
   }
  n->prev->next=(struct Node*)malloc(sizeof(struct Node));
   n->prev->next->next=NULL;
   free(n);
   }
void printll(struct Node *n)
{  
   while (n->next->next!=NULL)
   {
     printf("%d\t",n->data);
     n=n->next;
   }
}
int main()
{
   struct Node *t,*head;
   head=NULL;
   t=NULL;
   int i=0,n;
   create(5,&head);
   do
    {
     printf("Enter Choice :\n1.Insert at begin\n2.Insert at end\n3.Delete at start\n4.Delete at end\n5.Display \n ");
     scanf("%d",&i);
     switch(i)
     {
         case 1:
         printf("Enter no ");
         scanf("%d",&n);
         insert_at_start(&head,n);
         break;
         case 2:
         printf("Enter no ");
         scanf("%d",&n);
         insert_at_end(head,n);
         break;
         case 3:
         delete_at_start(&head);
         break;
         case 4:
          delete_at_end(head);
          break;
          case 5:
          printll(head);
     }
     }while(i!=5);


}