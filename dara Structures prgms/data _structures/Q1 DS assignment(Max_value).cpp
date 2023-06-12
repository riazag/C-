#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node* next;
};

void Insert(struct node **head, int data)
{
    node *temp;
	temp= (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = (*head);
    
    (*head) = temp;
}
void Traverse(struct node* head)
{
    while (head != NULL)
    {
       cout << head->data << " ";
        head = head->next;
    }
}

int MaxValue(struct node*head)
{
	
	int maxNo=0;
    		node*temp=head;
    		
    		while(temp!=NULL)
    		{
    		if(temp->data>maxNo)
			{
			maxNo=temp->data;
			  }	
			  	temp=temp->next;
			}
			return maxNo;		
}
float Average(struct node* head)
{
	
	 int sum=0,count=0;
				 float average;
				node*temp=head;
				 
				while(temp!=NULL)
				{
				sum+=temp->data;
			
				count++;
					
				temp=temp->next;	
				}
				
				average=(double)sum/count;
				return average;
}
int main()
{
	struct node*head=NULL;
	cout<<"****************************************"<<endl;
	Insert(&head, 30);
	Insert(&head, 25);
	Insert(&head, 20);
	Insert(&head, 15);
	Insert(&head, 10);
	Insert(&head, 5);
	cout<<"Elements of linked list:  "<<"  ";
	Traverse(head);
	cout<<"\n ****************************************"<<endl;
	cout<<"Max_value in linked list:  "<<"  ";
	cout<<MaxValue(head);
	cout<<"\n ****************************************"<<endl;
	cout<<"Average of linked list:  "<<"  ";
	cout<<Average(head);
	
	
}
