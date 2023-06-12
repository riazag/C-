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
		cout << "1. Insert at last\n";
		cout << "2) traverse\n";

		cout << "*****************************" << endl;

		cout << "enter your choice: ";
		cin >> ch;

		switch (ch)
		{
		case 0:
			break;

		case 1:
		{

			cout << "_________________________________" << endl;
			cout << " Insert at last\n";
			cout << "_________________________________" << endl;
			// check linked list is empty

			if (head == NULL)
			{

				cout << "enter any number :";
				cin >> info;

				cout << "input data : " << info << endl;

				node *temp;
				temp = (node *)malloc(sizeof(node));
				temp->data = info;
				temp->next = NULL;
				head = temp;
				counter++;
				break;
			}
			else
			{

				cout << "enter any number :";
				cin >> info;

				cout << "input data : " << info << endl;

				node *temp1;
				temp1 = (node *)malloc(sizeof(node));
				temp1 = head;
				while (temp1->next != NULL)
				{

					temp1 = temp1->next;
				}
				node *temp;
				temp = (node *)malloc(sizeof(node));
				temp->data = info;
				temp->next = NULL;
				temp1->next = temp;

				break;
			}
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
		}

		} // switch

	} while (ch != 0);
}