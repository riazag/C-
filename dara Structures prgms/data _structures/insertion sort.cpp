#include <iostream>
using namespace std;

// function to print an array

void printArray(int arr[], int size)
{
for (int i=0; i<size; i++)
{
cout<<arr[i]<<"  ";

}
cout<<endl;


}

void insertionSortAsc(int arr[],int size)
{

    for(int step=1; step<size; step++)
    {
        int key = arr[step];
        int j = step-1;
        //compare key with each element ont the left side of it until an element smaller than
        // it is found.

        while (key< arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            --j;

        }
        arr[j+1]= key;
    }
}
void insertionSortDsc(int arr[],int size)
{

    for(int step=1; step<size; step++)
    {
        int key = arr[step];
        int j = step-1;
        //compare key with each element ont the left side of it until an element smaller than
        // it is found.

        while (key>arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            --j;

        }
        arr[j+1]= key;
    }
}
// driver code 
int main()
{
    int data[] = {90,5,15,4,23};
    int size = sizeof(data)/sizeof(data[0]);
    insertionSortAsc(data,size);
    cout<<"Sorted array in ascending order : \n";
    printArray(data,size);
    cout<<"\n****************************\n"; 
    insertionSortDsc(data,size);
    cout<<"Sorted array in dscending order : \n";
    printArray(data,size);

    
    return 0;
}
