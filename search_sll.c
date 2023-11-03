#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node search(struct node *head,int key);
int main()
{
	int key;
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
	printf("enter key to be searched");
	scanf("%d",&key);
	search(head,key);
}
struct node search(struct node *head,int key)
{
	struct node *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		if(temp->data==key)
			c++;
		temp=temp->link;
	}
	if(c==0)
		printf("serach key not found");
	else
		printf("search key is found");
}	
