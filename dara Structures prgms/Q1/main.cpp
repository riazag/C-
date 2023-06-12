#include <iostream>

using namespace std;

int main(){

	int i,n;

	cout<<"enter size of array: ";
	cin>>n;

	int A[n];
 cout<<"\n enter "<<n<<" elements of array: "<<endl;
	for( i=0;i<n; i++){
        cout<<i+1<<")";
		cin>>A[i];

	}

	cout<<"even numbers in array :";

	for( i=0;i<n; i++){

		if(A[i]%2==0){

			cout<<A[i]<<" ";
		}

	}

		cout<<"\n odd numbers in array :";

		for( i=0;i<n; i++){

		if(A[i]%2==1){

			cout<<A[i]<<" ";
		}

	}

	return 0;
}
