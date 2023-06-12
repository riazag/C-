#include <iostream>

using namespace std;

int main(){

	int i,n,En=0,Od=0;

	cout<<"enter size of array: ";
	cin>>n;

	int A[n];
 cout<<"\n enter "<<n<<" elements of array: "<<endl;
	for( i=0;i<n; i++){
		
        cout<<i+1<<")";
        
		cin>>A[i];

	}
    
    cout<<"\n Array is : ";
    
	for( i=0;i<n; i++){
	
	 cout<<A[i]<<" ";
	

		if(A[i]%2==0){

			En++; 
			
		}else{
			
			Od++;	
		}
}
       	cout<<"\n\n No of Even numbers in array :"<<En;
       	
		cout<<"\n\n No of O dd numbers in array :"<<Od;

	return 0;
}
