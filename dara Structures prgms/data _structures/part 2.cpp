#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{

    int data; // will store information

    node *next; // reference to the next node
};

int main()
{

    node *head = NULL; // empty link list

    int info = 0, node_Number = 0, counter = 0;

    int ch;

    do
    {
        cout<<"*****************************"<<endl;
 		
 		cout<<"enter your choice: ";
 		cin>>ch;
 		
 		switch(ch)
 		{
          case 2:
        {

            node *temp1;
            temp1 = head;

            cout << "********************************" << endl;
            cout << "Traverse a link list element\n " << endl;
            cout << "********************************" << endl;
            if (temp1 == NULL)
            {

                cout << endl
                     << "The linked list is empty " << endl;
            }
            else
            {

                cout << "Element of the linked list: ";
                while (temp1 != NULL)
                {

                    cout << temp1->data;
                    temp1 = temp1->next;
                    cout << " ";
                }

                cout << endl
                     << "total number of nodes: " << counter++;
                break;
            }
        }
                } // switch

    } while (ch != 0);
}