#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
void delete(struct node*head,int position);
void display(struct node*head);
void main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	head->data=2000;
	head->link=NULL;
	struct node*current=(struct node*)malloc(sizeof(struct node));
	current->data=3000;
	current->link=NULL;
	head->link=current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=4000;
	current->link=NULL;
	head->link->link=current;
	printf("before deltion\n");
	display(head);
	printf("after deletion\n");
	delete(head,2);
	display(head);

}

void delete(struct node*head,int position)
{
	struct node *temp=head;
	struct node *temp1=NULL;
	while(position!=1)
	{
		temp1=temp;
		temp=temp->link;
		position--;
	}
	temp1->link=temp->link;
	free(temp);
	temp=NULL;
}
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("NULL\n");
}








