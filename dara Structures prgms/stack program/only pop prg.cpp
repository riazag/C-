#include <iostream>
#include <stdlib.h>

using namespace std;

int stack[5]={11,22,33,44,55}, n=5, top=0;

void pop(){

if(top<=n-1){
	
n--;

cout<<"pop element is : "<<stack[n]<<endl;

top++;



}else{
	
cout<<"Stack under_flow "<<endl;


}
}

void display(){
	

if (top>0){

    cout<<"stack of pop elements : "<<endl;

    for(int i=top-1; i>=0; i-- ){

        cout<<stack[i]<<" ";

    }

    cout<<endl;
  
 }

 else{

    cout<<"stack is empty ";
 }
}
int main()
{
    cout<<"orignal stack: ";
    for(int k=0; k<5; k++){
    	
    	cout<<stack[k]<<" ";
	}
	
	cout<<endl;


    int ch, val;
    
    cout<<"1) pop from Stack "<<endl;
    
    cout<<"2) display Stack "<<endl;

    cout<<"3) exit "<<endl;

do{
    cout<<"enter your choice:  ";

    cin>>ch;

    switch(ch){
    	
    case 1:
        pop();

        break;
    	
    case 2:

    display();

    break;
        
     case 3:


    exit(1);
    break;


    default:


    cout<<"Invalid choice : ";

    break;


    }

} while(true);

    return 0;
}
