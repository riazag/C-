#include<iostream>
using namespace std;

int main(){
	
	int j,N,k ,found=0;
	
	string item;
	
	string arr[10];
	
	
	cout<<"Size of array  :";
	cin>>N;
	
	cout<<"enter "<<N<<" element of array: "<<endl;
	
	// this loop is to take elements from users
	for( j=0;j<N;j++){
		
		// j+1 is to start index from 1
		
		cout<<j+1<<")";
		
		cin>>arr[j];
	}
	
	cout<<"enter element to delete  :";
	
	cin>>item;
	
	// this loop is to check whether the elements 
	// to be deleted is in array or not

	for(k=0;k<N;k++){  
		
	   if(arr[k]==item){// step 1 of algorithm
		
	       for(j=k;j<=(N-1);j++){  //step 2 of algorithm
		
            	arr[j]=arr[j+1];
	
	// found++ is to check wehter the element is found or not 
             	
				 found++;
	
             	k--;
	
            	N--; //step 3 of algorithm
        	}
       }
  }
  
  if(found==0){
  	
  	cout<<"Element not found !"<<endl;
  
  }else{
  	
	  cout<<"Element deleted Successfully !"<<endl;
  	
	cout<<"\nNew array is : ";
	
	// this loop is to print new array
	
	for( j=0;j<N;j++){
		
	cout<<arr[j]<<" ";
	
	}
}
	return 0;
}
