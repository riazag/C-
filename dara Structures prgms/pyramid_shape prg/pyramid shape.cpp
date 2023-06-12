#include<iostream>

using namespace std;

int main(){
	
	int r,sp, p,no,n,z,m=1;
		cout <<"Enter number of rows : ";
	
	cin>>no;
	n=no;
	z=n;
	for(r=1;r<=no;r++){
		
		for(sp=1;sp<=n;sp++){
			
			cout<<" ";
		}
		
		n--;
		
		for(p=1;p<=r;p++){
			
			cout<<r<<" ";
		}
		cout<<endl;
	}
	
	for(r=1;r<=no;r++){
		
		for(sp=m;sp>=1;sp--){
			
			cout<<" ";
		}
		
		m++;
		
		for(p=1;p<=z;p++){
			
			cout<<r<<" ";
		}
		z--;
	cout<<endl;
	}
}
