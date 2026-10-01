#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head, *newnode, *temp;
	int n,i,largest,smallest;
	
	head = NULL;
	
	printf("Enter the no. of Nodes: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		
		printf("Data elements:");
		scanf("%d",&newnode->data);
		
		newnode->next=NULL;

	
	if(head== NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
       temp->next=head;

    printf("\n CIRCULAR LINKED LIST:\n");
    temp=head;
   do
   {
   	printf("%d->",temp->data);
   	temp=temp->next;
   }
   while(temp !=head);

   	printf("Back To Head");
	   
   	largest = head->data;
    smallest = head->data;
       
        temp = head;

    do
{
    if(temp->data > largest)
    {
        largest = temp->data;
    }
  
    if(temp->data < smallest)
    {
        smallest = temp->data;
     }
    temp = temp->next;
}
   while(temp !=head);
   
    printf("\n\n Largest number=%d",largest);
    printf("\n\n Smallest number=%d",smallest);
    
      return 0;
}
