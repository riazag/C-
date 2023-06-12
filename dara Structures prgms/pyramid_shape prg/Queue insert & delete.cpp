#include<iostream>
using namespace std;


	
	int Queue[5];
	int front = -1, rear =-1, n=5;
	
	void insertQueue(int val){
		
		if ((front ==0 && rear== n-1) || (front== rear+1))
		
		{ 
			cout<<"Queue overflow \n";
			
			return;
		}
		if(front == -1){
			
			front =0;
			
			rear=0;
			
		}else{
			
			if(rear== n-1)
			rear =0;
			
			else
			
			rear =rear +1;
		}
		Queue[rear] = val;
	}
	
	void deleteQueue(){
		
		if (front == -1){
			
			cout<<"Queue underflow \n";
			return;
		}
		cout<<"element is deleted from queue is : "<<Queue[front]<<endl;
		
		if (front == rear){
			
			front =-1;
			rear=-1;
		}else
		{
			
			if (front == n-1)
			{
				front =0;
			}else
			{
				front = front +1;
			}
		}
	}
	
	void display(){
		
		int f= front ,r= rear;
		
		if(front== -1){
			
			cout<<"Queue is empty "<<endl;
			return;
		}
		
		cout<<"Queue elemets are: \n";
		
		if(f<r){
			
			while(f<=r){
				
				cout<<Queue[f]<<" ";
				f++;
			}
		}else
		{
			while(f<=n-1){
				
		    cout<<Queue[f]<<" ";
		    
			f++;
			
			}
			
			f=0;
			while(f<=r){
				
				cout<<Queue[f]<<" ";
				f++;
			}	
		}
		
		cout<<endl;
	}
	
	int main(){
		
		int ch, val;
		
		cout<<"1) insert \n";
		cout<<"2) Delete \n";
		cout<<"3) Display \n";
		cout<<"3) exit \n";
		
		do{
			
			cout<<"Enter choice :"<<endl;
			cin>>ch;
			
			switch(ch){
			
			case 1:
				cout<<"input for insertion : "<<endl;
				cin>>val;
				insertQueue( val );
				break;
				
			case 2: 
			     deleteQueue();
			     break;
			
			case 3:
			     display();
			     break;
			
			case 4:
			    cout<<"Exit /n";
			    break;
			default: cout<<"Incorrect! \n ";    
				
			
			}
			
		}while(ch != 4);
		
		return 0;
		
	}

