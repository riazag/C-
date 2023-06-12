#include <iostream>
using namespace std;
int main()
{
	
	int n1,n2;
	cout<<"enters numbers:";
	cin>>n1>>n2;
	switch(n1>n2)
	{
		
		case 0:
						
			cout<<"max number is :"<<n2;
			break;
			
		case 1:
		
		    cout<<"max number is :"<<n1;
 
    
	}
	return 0;
}

