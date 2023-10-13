#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
void insert(struct node*head,int data,int position);
void traverse(struct node*head);
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
	insert(head,5000,3);
	traverse(head);

}

void insert(struct node*head,int data,int position)
{
	struct node*temp=NULL;
	temp=head;
	struct node*new=(struct node*)malloc(sizeof(struct node));

	new->data=5000;
	new->link=NULL;
	while(position!=2)
	{
		temp=temp->link;
		position--;
	}
	new->link=temp->link;
	temp->link=new;
}
void traverse(struct node*head)
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("empty");
	}
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
}




