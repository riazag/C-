#include <iostream>
using namespace std;

class node
{
public:
  int data;

  node *next;

  node(int value)
  {
    data = value;

    next = NULL;
  }
};
void insertAtTail(node *&head, int value)
{
  node *n = new node(value);

  if (head == NULL)
  {
    head = n;

    return;
  }

  node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node *head)
{
  node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << "->";

    temp = temp->next;
  }

  cout << "NULL" << endl;
}

void insertAthead(node *&head, int value)
{
  node *n = new node(value);

  n->next = head;

  head = n;
}
bool Search(node *head, int key)
{
  node *temp = head;
  while (temp != NULL)
  {

    if (temp->data == key)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}
int main()
{

  node *head = NULL;

  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  display(head);
  insertAthead(head, 4);
  insertAthead(head, 5);
  insertAthead(head, 6);
  display(head);
  cout<<Search(head,5);

  return 0;
}