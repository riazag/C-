#include <iostream>

using namespace std;

int stack[5]={10,20,30,40,50},top=5,j=4;

void intialStack(){
 
for(int i=0;i<5;i++){
	
	cout<<stack[i]<<" ";
  }
	
}

void pop(){
	
	for(int i=0; i<5; i++){
		
		cout<<"\t\n\n The pop element is : "<<stack[top-1]<<endl;
		
		top--; 
		
		cout<<"\t\n New array:";
         
           for(int i=0;i<j;i++){
	
              	cout<<stack[i]<<" ";
              	 
         } 
		 	j--; 
    }
}

int main(){
	
	cout<<"\t\n intial Stack:";
     
	 intialStack();
     
	 pop();

	return 0; 
	
} 
