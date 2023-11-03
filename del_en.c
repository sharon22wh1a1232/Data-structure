#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node* delete_entire(struct node *head)
{
        struct node *temp=NULL;
        while(temp!=NULL)
        {
                head=temp->link;
                free(temp);
                temp=head;
        }
        head=NULL;
	return head;
}
void display(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
		printf("Linked list is empty");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
}
void main()
{
        struct node *head=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->link=NULL;
        
       	struct node *current=(struct node*)malloc(sizeof(struct node));
        current->data=20;
        current->link=NULL;
        head->link=current;
       
       	current=(struct node*)malloc(sizeof(struct node));
        current->data=30;
        current->link=NULL;
        head->link->link=current;
       
        printf("Initial elements are\n");
	display(head);

	printf("After deleting the entire list\n");
	head=delete_entire(head);
	display(head);
}


