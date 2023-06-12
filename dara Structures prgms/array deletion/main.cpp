#include <iostream>

using namespace std;

int main()
{
    // program for deletion of element into an array

    int arr[10], i,elem,j,tot,found=0;

    cout<<"Enter the array size : ";
    cin>>tot;

    cout<<"Enter "<<tot<<" Array element: "<<endl;
    
    // this loop is to take elements from users

    for(i=0; i<tot; i++){
    	
    	cout<<i+1<<")";

        cin>>arr[i];
    }



    cout<<"Enter element to delete: ";

    cin>>elem;
    
    // this loop is to check whether the elements 
	// to be deleted is in array or not


for(i=0; i<tot;i++){

    if(arr[i]==elem){ // step 1 of algorithm

        for(j=i;j<=(tot-1); j++){  //step 2 of algorithm

            arr[j]=arr[j+1];

// found++ is to check wehter the element is found or not 
            found++;

            i--;

            tot--; //step 3 of algorithm

        }

    }

}

if(found==0){

    cout<<"\nElement does'nt found in array !";

}else{

cout<<"\nElement deleted Successfully!"<<endl;

cout <<"\n New array :";

for (i=0; i<tot;i++){
	
cout<<arr[i]<<"  ";

    }  
  }
return 0;
}
