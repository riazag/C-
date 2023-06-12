#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{

    char data; // will store information

    node *next; // reference to the next node
};

int main()
{

    node *head = NULL; // empty link list

    char info;
    int node_Number = 0, counter = 0;

    int ch;

    do
    {

        cout << "****************************" << endl;
        cout << "what do you want?" << endl;
        cout << "******************************" << endl;
        cout << "0) Quit\n";
        cout << "1) insert at first\n";
        cout << "2. traverse\n";
        cout << "3) sort node\n";
        

        cout << "*****************************" << endl;

        cout << "enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 0:
            break;

        case 1:
        {

            cout << "Enter any number: ";

            cin >> info;

            cout << "*************************************" << endl;

            cout << "Input data: " << info << " at node no " << ++counter << endl;

            cout << "head address at the biginning : " << head << endl;

            node *temp;

            temp = (node *)malloc(sizeof(node));

            temp->data = info;

            temp->next = head;

            head = temp;

            cout << "Node data : " << temp->data << endl;

            cout << "Head address after node insertion : " << head << endl;

            cout << "Adress of the curent node: " << temp << endl;

            cout << "Address of the next node : " << temp->next << endl;

            cout << "***************************************" << endl;

            cout << "insertion at beginning completed" << endl;

            cout << "*****************************************" << endl;

            break;
        }

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

       

        case 3:
        {

            cout << "__________________________" << endl;
            cout << "3. sort node\n";
            cout << "__________________________" << endl;

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));

            node *temp2;
            temp2 = (node *)malloc(sizeof(node));

            char temp;

            for (temp1 = head; temp1 != NULL; temp1 = temp1->next)
            {

                for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
                {
                    if (temp1->data > temp2->data)
                    {
                        temp = temp1->data;
                        temp1->data = temp2->data;
                        temp2->data = temp;
                    }
                }
            }
        }

        } // switch

    } while (ch != 0);
}