#include<stdio.h>
#include<stdlib.h>
int a[10],i;				//stack was predefined with size 10
int push()					//insert elements into stack one by one
{
	if(i!=9)
	{
		printf("enter an element:");
		scanf("%d",&a[i]);
		i++;
	}
	else
	{
		printf("stack is full of 10 elements\n");
	}
}
int pull()					// delete the last element in stack
{
	if(i==0)
	{
	printf("stack is emply you can push upto 10 elements\n");
	}
	else
	{
	printf("element poped:%d\n",a[i-1]);
	i--;
	}
}
int top_element()			//display the last element in stack
{
printf("top element:%d\n",a[i-1]);
}
int elements_in_stack()		//display all elements in stack
{
	printf("elements in stack:");
	for(int p=0;p<i;p++)
	{
	printf("%d ",a[p]);
	}
	printf("\n");
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