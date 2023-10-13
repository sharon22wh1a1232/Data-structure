#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*link;
};
void delete_random(struct node*head);
int main()
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
        delete(head,3000,2);
}
void delete_random(struct node*head)
{
	struct node*temp=head;
	if(position==NULL)
	{
		while(position!=1)
		{
		temp=temp->link;
		position--;
		}
	free(temp);
	temp=NULL;
	printf("%d",head->data);
}


