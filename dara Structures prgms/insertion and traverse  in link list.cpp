#include <iostream>
#include <stdlib.h>
using namespace std;

 struct node{
 	
 	int data;// will store information
 	
 	node *next; // reference to the next node
 }; 
 
 int main()
 {
 	
 	node* head = NULL; // empty link list
 	
 	int info = 0, node_Number = 0, counter = 0;
 	
 	int ch;
 	
 	do{
 		
 		cout<<"****************************"<<endl;
 		cout<<"what do you want?"<<endl;
 		cout<<"******************************"<<endl;
 		cout<<"0) Quit\n";
 		cout<<"1) insert at first\n";
 		cout<<"2) traverse\n";
 		cout<<"3. Insert at last\n";
 		cout<<"4. Insert after specific number of node\n";
 	    cout<<"5. delete at ist node\n";
 	    cout<<"6. delete at last node\n";
 	    cout<<"7. delete specific number of node\n";
 	    cout<<"8. sort node\n";
 	    
 		cout<<"*****************************"<<endl;
 		
 		cout<<"enter your choice: ";
 		cin>>ch;
 		
 		switch(ch)
 		{
 			case 0:
 				break;
 				
 			case 1:
 				{
				 
 				
 				cout<<"Enter any number: ";
 	
	 cin>>info;
	 
	 cout<<"*************************************"<<endl;
	 
	 cout<<"Input data: "<<info << " at node no "<< ++counter <<endl;
	 
	 cout<<"head address at the biginning : "<<head << endl;
	 
	 node *temp;
	 
	 temp= (node*)malloc(sizeof(node));
	 
	  temp->data = info;
	
	 temp->next = head;
	 
	 head = temp;
	 
	 cout<<"Node data : "<<temp->data<<endl;
	 
	 cout<<"Head address after node insertion : "<<head<<endl;
	 
	 cout<<"Adress of the curent node: "<<temp<<endl;
	 
	 cout<<"Address of the next node : "<<temp->next<<endl;
	 
	 cout<<"***************************************"<<endl;
	 
	 cout<<"insertion at beginning completed"<<endl;
	 
	 cout<<"*****************************************"<<endl;
	 
 				
 				
 				
 				break;
 			}
 				
 			case 2:
 				{
				 
 				
 				node *temp1;
 				temp1 = head;
 				
 				cout<<"********************************"<<endl;
 				cout<<"Traverse a link list element\n "<<endl;
 				cout<<"********************************"<<endl;
 				if(temp1 == NULL)
 				{
 					
 					cout<<endl<<"The linked list is empty "<<endl;
 					
				 }
				 else
				 {
				 	
				 	cout<<"Element of the linked list: ";
				 	while(temp1 != NULL)
					 {
				 		
				 		cout<<temp1->data;
				 		temp1 = temp1->next;
				 		cout<<" ";
				 		
					 }
					 
					 cout<<endl<<"total number of nodes: "<<counter++;
				      break;
				 }
				 
}
			 case 3:
			 	{
				 
			       cout<<"_________________________________"<<endl;
				   cout<<"3. Insert at last\n";
				   cout<<"_________________________________"<<endl;
				   //check linked list is empty
				   
				   if(head==NULL)
				   {
				   	 
				   	cout<<"enter any number :";
				   	cin>>info;
				   	
				   	cout<<"input data : "<<info<<endl;
				   	
				    node* temp;
				   	temp=(node*) malloc(sizeof(node));
				   	 	temp->data = info;
				   	temp->next = NULL;
				   	head = temp;
				   	counter++;
				   	break;
					   
					   }
					   else
					   {
					   	 
				   	cout<<"enter any number :";
				   	cin>>info;
				   	
				   	cout<<"input data : "<<info<<endl;
				   	
				   	node*temp1;
				   	temp1=(node*) malloc(sizeof(node));
				   	temp1 = head;
				   	while(temp1->next != NULL)
				   	  {
				   	  	
				   	  	temp1 = temp1->next;
						 }
						 node* temp;
				   	temp=(node*) malloc(sizeof(node));
				   	temp->data = info;
				   	temp->next = NULL;
				   	temp1->next = temp;
				
				   	break;
						 
						 
				 }	
			}
				 
				 case 4:
				 	{
					 
				 	 cout<<"_________________________________"<<endl;
				   cout<<"4. Insert after specific number of node\n";
				   cout<<"_________________________________"<<endl;
				   //check linked list is empty
				   
				   if(head==NULL)
				   {
				   	 cout<<"the link list is empty"<<endl;
				   	 
				   	 break;
				   	 
				   }
				   	cout<<"enter any number :";
				   	cin>>info;
				   	
				   	cout<<"input data : "<<info<<endl;
				   	cout<<"enter the node number: ";
				   	cin>>node_Number;
				
				   	
				    node* temp1;
				   	temp1=(node*) malloc(sizeof(node));
				    temp1=head;
				   	for(int i=0;i<node_Number; i++)
					   {
				   		
				   		temp1=temp1->next;
				   		
				   		if(temp1==NULL)
				   		{
				   			
				   			cout<<node_Number<<"node does'nt exist"<<endl;
				   			break;
						   }
				   		
					   }
		
					node* temp;
				   	temp=(node*) malloc(sizeof(node));
				   	temp->data = info;
				   	temp->next = temp1->next;
				   	temp1->next = temp;
				   	counter++;
				
				   	break;
				}
						 
				 
				 case 5:
				 	{
					 
				 	 cout<<"_________________________________"<<endl;
				   cout<<"5. delete at ist node\n";
				   cout<<"_________________________________"<<endl;
				   //check linked list is empty
				   
				   if(head==NULL)
				   {
				   	 cout<<"the link list is empty";
				   	 break;
				   }
				   else if(head->next == NULL)
				   {
				   	
				   	head =NULL;
				   	cout<<"the ist node of the link list is deleted"<<endl;
				   	cout<<"the link list is empty"<<endl;
				   	counter--;
				   	break;
			}
				   	  
				   	node * temp;
				   	temp = (node*) malloc(sizeof(node));
				   	temp = head;
				   	head = temp->next;
				   	free(temp);
				   	cout<<"the ist node of the link list is deleted"<<endl;
				   	counter--;
				   	break;
						 
					}
					 case 6:
					 	{
						 
					 	 cout<<"_________________________________"<<endl;
				   cout<<"6. delete at last node\n";
				   cout<<"_________________________________"<<endl;
				   //check linked list is empty
				   
				   if(head==NULL)
				   {
				   	 cout<<"the link list is empty";
				   	 break;
				   }
				   else if(head->next == NULL)
				   {
				   	
				   	head =NULL;
				   	cout<<"the last node of the link list is deleted"<<endl;
				   	cout<<"the link list is empty"<<endl;
				   	counter--;
				   	break;
				   }
				   	
				    node* temp1;
				   	temp1=(node*) malloc(sizeof(node));
				   	temp1=head;
				   	node*oldTemp;
				   	oldTemp = (node*)malloc(sizeof(node));
				   	while(temp1->next != NULL)
					   {
				   		oldTemp = temp1;
				   		temp1 = temp1->next;
				   		
					   }
					   oldTemp->next = NULL;
				   	free(temp1);
				   	cout<<"the last node of the link list is deleted"<<endl;
				   	counter--;
				   	break;
				}
					 case 7:
					 	{
						 
					 	 cout<<"_________________________________"<<endl;
				   cout<<"7. delete specific number of node\n";
				   cout<<"_________________________________"<<endl;
				   //check linked list is empty
				   
				   if(head==NULL)
				   {
				   	 cout<<"the link list is empty";
				   	 break;
				   }
				   else if(head->next == NULL)
				   {
				   	
				   	head =NULL;
				   	cout<<"the last node of the link list is deleted"<<endl;
				   	cout<<"the link list is empty"<<endl;
				   	counter--;
				   	break;
				   }
				   cout<<"enter any node number :";
				   cin>>node_Number;
				   if(node_Number> counter)
				   {
				   	
				   	cout<<"no such node exist";
				   	
				   }
				   node*temp1;
				   temp1 = (node*)malloc(sizeof(node));
				   temp1 = head;
				   
				   node*oldTemp;
				   oldTemp = (node*)malloc(sizeof(node));
				   oldTemp = temp1;
				   
				   if(node_Number == 1)
				   {
				   	
				   	head = temp1->next;
				   	free(temp1);
				   	counter--;
				   	cout<<node_Number<<"node of the link list is deleted"<<endl;
				   	break;
				   }
				   
				   for( int i = 0;i<node_Number; i++)
				   {
				   	
				   	oldTemp = temp1;
				   	temp1 = temp1->next;
				   }
				   oldTemp->next = temp1->next;
				   free(temp1);
				   
				   counter--;
				   cout<<node_Number<<"node of the linked list deleted"<<endl;
				   break;
				}
				
				case 8:
					{
						
						cout<<"__________________________"<<endl;
						cout<<"8. sort node\n";
						cout<<"__________________________"<<endl;
						
						node *temp1;
						temp1 = (node*)malloc(sizeof(node));
						
						node *temp2;
						temp2 = (node*)malloc(sizeof(node));
						
						int temp=0;
						
						for(temp1 = head; temp1 != NULL; temp1= temp1->next)
						{
							
							for(temp2= temp1->next; temp2!=NULL; temp2 = temp2->next)
							{
								if(temp1->data > temp2->data)
								{
									temp = temp1->data;
									temp1->data = temp2->data;
									temp2->data =temp;
								}
							}
						}
						
						
					}
						 
				 }	//switch
				 	   
 	      	} while (ch!= 0);
 	
	 
 }
