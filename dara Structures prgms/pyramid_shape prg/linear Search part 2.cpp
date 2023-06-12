#include <iostream>
using namespace std;

int main(){
	
	int arr[10],tot, i,num, arrTemp[50],j=0,check=0;
	
	cout<<"Entere size of array : ";
	cin>>tot;
	
	cout<<"Enter "<<tot<<" Aray Elements: "<<endl;
	
	for(i=0;i<tot; i++)
	cin>>arr[i];
	 
	 cout<<"\n Enter number to search: ";
	 cin>>num;
	 
	 for(i=0;i<tot;i++)	{
	 
		if(arr[i]==num ){
			
			arrTemp[j]=i;
			j++;
			check++;
			
		}
	}
		 
	if(check>0){
	
	cout<<"\n Number found at index No:";
	tot=check;
	
	for(i=0;i<tot;i++){
		
		cout<<arrTemp[i]<<" ";
	   }
	}else	
		cout<<"element dosen't found !";
		cout<<endl;
			
	return 0;
	
} 
