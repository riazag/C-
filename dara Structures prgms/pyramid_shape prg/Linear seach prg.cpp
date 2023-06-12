#include <iostream>
using namespace std;

int main(){
	
	int arr[10], i,num, index;
	
	cout<<"Entere 10 Numbers : "<<endl;
	
	for(i=0;i<10; i++)
	
	cin>>arr[i];
	
	cout<<" \n Enter a Number to search ";

	cin>>num;
	
	for(i=0; i<10; i++){
		
		if(arr[i]==num){
			
			index=i;
			break;
			
		}
	}
	
	cout<<"\n Found at index No :"<<index;
	cout<<endl;
	return 0;
	
}
