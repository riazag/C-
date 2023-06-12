#include <iostream>
#include <stdlib.h>

using namespace std;

int stack[10], n=10, top=-1;

void Push(int val ){

if( top>=n-1)

    cout<<"Stack overflow "<<endl;

else{

    top++;

    stack[top]=val;


}

}
void pop(){

if(top<=-1){

cout<<"Stack under_flow "<<endl;

}else{
cout<<"pop element is : "<<stack[top]<<endl;

top--;


}
}

void display(){

if (top>=0){

    cout<<"Stack Element are : "<<endl;

    for(int i=top; i>=0; i-- ){

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

    int ch, val;


    cout<<"1) push in Stack "<<endl;
    cout<<"2) display in Stack "<<endl;
    cout<<"3) exit "<<endl;
    cout<<"4) pop from Stack "<<endl;


do{
    cout<<"enter your choice:  ";

    cin>>ch;

    switch(ch){

    case 1:


    cout<<"Enter value  to be push: "<<endl;
    cin>>val;

    Push(val);

    break;


    case 2:

    display();

    break;



    case 3:


    exit(1);
    break;

    case 4:
        pop();

        break;

    default:


    cout<<"Invalid choice : ";

    break;


    }

} while(true);

    return 0;
}
