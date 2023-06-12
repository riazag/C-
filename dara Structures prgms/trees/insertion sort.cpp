#include<iostream>
using namespace std;
//function to print array
void printarray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
	cout<< array[i]<<" ";
	}
	cout<<endl;
}
void insertsort(int array[],int size)

{
	for(int step=1;step<size;step++)
	{
		int key=array[step];
		int j=step-1;
		//compare key with each element on the left of it until an element smaller than it is found.
		while( key < array[j]) && j >= 0)
		
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
}
//drive code

int main()
{
int  data[]={90,5,15,4,23};
int size= sizeof(data) / sizeof(data[0]);
insertsort(data,size);
cout<<"sorting array in ascendig order:\n";
printarray(data,size);

	
}

