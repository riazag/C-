#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data; // will store informtion

    node *next; // reference to the next node
};

int main()
{

    node *head = NULL; // empty link list

    node *temp; // new node where data will be inserted

    int info = 0;

    int ch;
    do
    {
    	cout<<"\n ************************"<<endl;
    	cout<<"1. Quit"<<endl;
    	cout<<"2. Insert data to linked list"<<endl;
    	cout<<"3. To display linked list"<<endl;
    	cout<<"4. To find maximum value in a linked list"<<endl;
    	cout<<"5. To find Average of linked list elements: "<<endl;
    	cout<<"**************************"<<endl;
    	
    	cout<<"enter your choice:";
    	cin>>ch;
    	
    	switch(ch)
		{
		case 1:
				break;
		case 2:
		{
           if (head == NULL)

          {
            cout << "Enter any number: ";
            cin >> info;

            cout << "Input Data :" << info << endl;

            temp = (node *)malloc(sizeof(node)); // malloc function is to specify memory of the temp;

            temp->data = info;

            temp->next = NULL;

            head = temp;

            //counter++;
        }
        else

        {
            cout<<"Enter any number: ";
            cin>>info;

            cout<<"Input Data: "<<info<<endl;

            node*temp1;

            temp1=(node*)malloc(sizeof(node));

            temp1=head;

            while (temp1->next!= NULL)
            {
                temp1=temp1->next;
            }
            node*temp;

            temp=(node*)malloc(sizeof(node));


            temp->data=info;

            temp->next=NULL;

            temp1->next=temp;

        }
        break;
    }
    case 3:
    	{
           node*temp=head;
    
           cout<<"\n linked list Elements are:";

           while (temp!=NULL)
    
    	{
          cout<<temp->data<<" ";

            temp=temp->next;
        }
        break;
    }
    case 4:
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
		
			
			cout<<"maximum Number in array:"<<maxNo;
			
			break;
			
		}
		case 5:
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
				
				cout<<"Average of linked list elements: "<<average;
			 
			}
    
      }//switch braket
      
	} while (ch!=1);

    return 0;
}
