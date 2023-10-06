#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
        int data;
        struct single_linked_list *p;

};
void traverse(struct single_linked_list *head);
void  main()
{
        struct single_linked_list *head=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        head->data=10;
        head->p=NULL;

        struct single_linked_list *current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=20;
        current->p=NULL;
        head->p=current;

        current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=30;
        current->p=NULL;
        head->p->p=current;
        traverse(head);
}

void traverse(struct single_linked_list *head)
   {
           //struct single_linked_list *temp=NULL;
                       
 struct single_linked_list *temp=(struct single_linked_list *)malloc(sizeof(struct single_linked_list *));
           temp->p=head;
	   int count=0;
           if(temp->p==NULL)
           {
                   printf("sll is empty");
         }
           while(temp->p!=NULL)
           {
		   count=count+1;
                   temp=temp->p;
	   }
                   printf("%d",count);
           
   }

