#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node* rev_sll(struct node *head);
void display();

int main()
{
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;
	
	struct node *current=(struct node *)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;
	
	current=(struct node *)malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	
	printf("Initial single linked list elements are\n ");
	display(head);
	printf("Reverse linked list elements are \n");
	head=rev_sll(head);
	display(head);
}
struct node* rev_sll(struct node *head)
{
	struct node *prev=NULL;
	struct node *next=NULL;
	while(head!=NULL)
	{
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
	}
	head=prev;
	return head;	
}

void display(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
		printf("empty list");
	else
	{
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}

}
