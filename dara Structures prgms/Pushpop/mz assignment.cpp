#include <iostream>

using namespace std;

int main(){

	int n;

	int even=0;
	int odd=0;
	int i;

	cout<<"enter size of array: ";
	cin>>n;
	
		int A[n];
 cout<<"enter elements of array: "<<endl;
	
	for( i=0;i<n; i++){
		
        
		cin>>A[i];

	}
    
    cout<<" Array is : ";
    
	for( i=0;i<n; i++){
	
	 cout<<A[i]<<" ";
	

		if(A[i]%2==0){

			even++; 
			
		}else{
			
			odd++;	
		}
}

      cout<<endl;
      
       	cout<<"total numbers of in even elements array :"<<even<<endl;
       	
		cout<<"total numbers of in odd elements array :"<<odd;

	return 0;
}
