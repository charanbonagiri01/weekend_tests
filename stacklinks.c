#include<stdio.h>
#include<stdlib.h>
struct node 					// structure to define a list,temporary variable and node
{
	int value;
	struct node *next;
}*node1,*temp,*list;
int push()
{
	node1=(struct node*)malloc(sizeof(struct node));	//dynamic allocation of memory to node
	if(list==NULL)						//check list is empty or not
	{	
		printf("enter the number:");
		scanf("%d",&node1->value);
		node1->next=NULL;
		list=node1;						//assigning the first node to list
	}
	else
	{
		temp=list;
		while(temp->next!=NULL)			//loop that goes to end of list
		{
		temp=temp->next;
		}
		printf("enter the number:");
		scanf("%d",&node1->value);
		node1->next=NULL;
		temp->next=node1;				// assigns the element to end of list
	}
}
int pull()
{
	temp=list;
	if(list==NULL)						//checks for list is empty
	{
		printf("stack is empty\n");
	}
	else if(temp->next==NULL)			// if one element is present in list
	{
		printf("value poped out from stack:%d\n",temp->value);
		list=NULL;
	}
	else
	{
	while(temp->next->next!=NULL)		// loop repeats until the 2nd last element is found
	{
		temp=temp->next;
	}
	printf("value poped out from stack:%d\n",temp->next->value);
	temp->next=NULL;				
	}
}
int top_element()
{
	if(list==NULL)					//checks for list is empty
	{
		printf("No elements\n");
	}
	else
	{
		temp=list;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		printf("top element in stack:%d\n",temp->value);
	}
}
int elements_in_stack()
{
	if(list==NULL)				//checks for list is empty
	{
		printf("No elements\n");
	}
	else
	{
		temp=list;
		printf("values in stack:");
		while(temp!=NULL)
		{
		printf("%d ",temp->value);
		temp=temp->next;
		}
		printf("\n");
	}
}
int main()
{
	int n;
	while(1)
	{
	printf("1:push element\n2.pull element\n3.top element\n4.elements in a stack\n5.exit\nenter your option");
	scanf("%d",&n);
	switch(n)
	{
	case 1:push();break;
	case 2:pull();break;
	case 3:top_element();break;
	case 4:elements_in_stack();break;
	case 5:exit(0);
	}
	}
}