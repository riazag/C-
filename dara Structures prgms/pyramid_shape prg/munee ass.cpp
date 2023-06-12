#include <iostream>
using namespace std;

int main() {
  
  
   
   int even=0, odd=0, i,s;
   
    cout<<"enter the size of array :";
    
    cin>>s;
    
     int A[s];
    
   cout<<"\n Enter elements of array :"<<endl;
   
   for(i=0;i<s;i++)
   {
       cin>>A[i];
   }
 
     cout<<"even numbers are :";
     
   for(i=0;i<s;i++)
   
   {
   
    if( A[i]%2==0)
   
   {
   	
   	 cout<<A[i]<<" ";
   	
       even++;
       
   }
   
}

cout<<endl;

   cout<<"total number of even elements in array:"<<even<<endl;
   
    cout<<"\n********************************"<<endl;
   
    cout<<"Odd numbers are :";
   
    for(i=0;i<s;i++)
   
   {
   
    if( A[i]%2==1)
   
   {
   	
   	 cout<<A[i]<<" ";
   	
       odd++;
       
   }
   
}

cout<<endl;
   
   cout<<" total number of odd elements in array:"<<odd<<endl;

    return 0;
}
