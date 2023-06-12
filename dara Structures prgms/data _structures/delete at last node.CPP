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

		cout << "****************************" << endl;
		cout << "what do you want?" << endl;
		cout << "******************************" << endl;
		cout << "0) Quit\n";
		cout << "1) insert at first\n";
		cout << "2) traverse\n";
		cout << "3. delete at last node\n";
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
					 << "total number of nodes: " << counter++ << endl;
				break;
			}
		}case 3:
		{

			cout << "_________________________________" << endl;
			cout << " delete at last node\n";
			cout << "_________________________________" << endl;
			// check linked list is empty

			if (head == NULL)
			{
				cout << "the link list is empty";
				break;
			}
			else if (head->next == NULL)
			{

				head = NULL;
				cout << "the last node of the link list is deleted" << endl;
				cout << "the link list is empty" << endl;
				counter--;
				break;
			}

			node *temp1;
			temp1 = (node *)malloc(sizeof(node));
			temp1 = head;
			node *oldTemp;
			oldTemp = (node *)malloc(sizeof(node));
			while (temp1->next != NULL)
			{
				oldTemp = temp1;
				temp1 = temp1->next;
			}
			oldTemp->next = NULL;
			free(temp1);
			cout << "the last node of the link list is deleted" << endl;
			counter--;
			break;
		}

		} // switch

	} while (ch != 0);
}