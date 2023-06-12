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
 	
 	int info = 0, node_number = 0, counter = 0;
 	
 	cout<<"*********************************"<<endl;
 	
 	cout<<"1. insert at first\n ";
 	
 	cout<<"***********************************"<<endl;
 	
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
	 
	
	 
	 
 }
