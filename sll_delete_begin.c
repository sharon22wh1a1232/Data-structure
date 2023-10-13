#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*link;
};
void delete_begin(struct node*head);
int main()
{
        struct node*head=(struct node*)malloc(sizeof(struct node));
        head->data=2000;
        head->link=NULL;
        struct node*current=(struct node*)malloc(sizeof(struct node));
        current->data=3000;
        current->link=NULL;
        head->link=current;
        delete(head);
}
void delete_begin(struct node*head)
{
	struct node*temp=head;
	head=temp->link;
	free(temp);
	temp=NULL;
	printf("%d",head->data);
}


