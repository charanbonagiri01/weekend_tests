#include<stdio.h>
#include<string.h>
/***************************
	Function pull_out
	compares the array of strings with string to be removed
**************************/
char pill_out(char *subjects[],char *del,int end)
{
	int i=0,j=end;
	printf("subjects remainig in suitcase:");
	for(;i<j;i++)
	{
		if(!(strcmp(&subjects[i],del)==0))
		{
			printf("%s ",&subjects[i]);
		}		
	}
	printf("\n");
}
/*******************************
	Main function that takes array of strings,string to be deleted as input,
	length of array and passes to function PULL_OUT
*******************************/
int main()
{
	int n,j=2,i;
	char *del;
	while(j!=0)
	{
		printf("enter the size:");	
		scanf("%d",&n);
		char *subjects[n];
		printf("enter subjects into suitcase:");
		for(i=0;i<n;i++)
		{
			scanf("%s",&subjects[i]);
		}
		printf("enter the subject to be deleted:");
		scanf("%s",del);
		pill_out(subjects,del,n);
		j--;
	}
}
