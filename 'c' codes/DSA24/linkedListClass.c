#include<stdio.h>
#include<stdlib.h>

int ch,len;

void insert_begin();
void insert_middle();
void insert_end();
int length();
void display();
void search();
void delete();
void exit();

struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;

void main()
{
	while(1)
	{
		printf("\n ----------------------------\n ");
		printf("\n Single Linked List Operation\n");
		printf("\n ----------------------------\n ");
		printf("\n 1. Insert at Begin \n 2. Insert at Middle \n 3. Insert at End \n 4. Length of the List \n 5. Display \n 6. Search \n 7. Delete \n 8. Exit \n");
		printf("\n ----------------------------\n ");
		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: insert_begin();
				break;
			case 2: insert_middle();
				break;
			case 3: insert_end();
				break;
			case 4: len=length();
				printf("\n Length :  %d ",len);
				break;
			case 5: display();
				break;
			case 6: search();
				break;
			case 7: delete();
				break;
			case 8: exit(0);

			default: printf("wrong choice \n");
		}
	}
}

void insert_begin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));

	printf("\n Enter the node data : \n ");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->link=root;
		root=temp;
	}
	printf("\n Element Inserted Successfully \n ");
}

void insert_middle()
{

	struct node* temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));

	printf("\n Enter the node data : \n ");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		int i=1,loc;
		printf("\n Enter the location you want to insert the element : ");
		scanf("%d",&loc);

		len=length();

		if(loc > len)
		{
			printf("Invalid location \t Currently the list having %d nodes",len);
		}
		else
		{
			p=root;

			while(i < loc)
			{
				p=p->link;
				i++;
			}

			temp->link=p->link;
			p->link=temp;
		}
		printf("\n Element Inserted Successfully \n ");
	}
}
void insert_end()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));

	printf("\n Enter the node data : \n ");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;

		while(p->link != NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
	printf("\n Element Inserted Successfully \n ");
}

int length()
{
	int count=0;
	struct node* p2;

	p2=root;

	while(p2!= NULL)
	{
		count++;
		p2=p2->link;
	}
	return count;
}
void display()
{
	struct node* p;

	p=root;

	if(root==NULL)
	{
		printf("\n List is empty\n");
	}
	else
	{
		while(p != NULL)
		{
			printf(" %d -->  ",p->data);
			p=p->link;
		}

	}
}
void search()
{
	int item,c=1;

	struct node* p;
	p=root;

	printf("\n Enter the value to search: ");
	scanf("%d",&item);

	while(p != NULL)
	{
		if(p->data == item)
		{
			printf("\n Item found at node %d \n ",c);
			break;
		}
		c++;
		p=p->link;
	}
}
void delete()
{
	struct node* temp;
	temp=root;
	int loc;

	printf("\n Enter the location you want delete: ");
	scanf("%d",&loc);

	if(loc>length())
	{
		printf("\n Invalid location and number of node in the list is %d ",length());
	}
	else if(loc==1)
	{
		root=temp->link;
		temp->link=NULL;
		free(temp);
		printf("\n Element Deleted Successfully \n ");
	}
	else
	{
		struct node *p,*q;
		int i=1;
		p=root;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		printf("\n Element Deleted Successfully \n ");
	}
}