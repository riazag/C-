#include <iostream>

using namespace std;

int main(){
	
	int A[25],i;
	cout<<"Enter the elements of array: "<<endl;
	for( i=0;i<6; i++){
    cout<<i<<")";
		cin>>A[i];
		
	}
	
	cout<<"even number in array :";
	
	for( i=0;i<6; i++){
		
		if(A[i]%2==0){
			
			cout<<A[i]<<" ";
		}
	}
	
		cout<<"\nodd number in array :";
	
		for( i=0;i<6; i++){
		
		if(A[i]%2==1){
			
			cout<<A[i]<<" ";
		}
		
	}
	
	return 0;
}
