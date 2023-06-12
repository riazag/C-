#include <iostream>
using namespace std;

// a structure representing a node of a tree

struct node
{
    int data;
    node *left, * right;
    
};

// A function creating new node of the tree and assigning the data.

node* CreateNode(int data)
{

    node *newnode = new node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

// A function creating binary search tree.

node* InsertIntoTree(node* root, int data)
{

    // creating node using data from argument list.
    node *temp = CreateNode(data);

    node *t = new node;

    t = root;

    // if root is null , assign it to the node creating created.

    if (root==NULL)

    root = temp;

    else
    {

        // Find the position for the new node to be inserted.

        while(t != NULL)
        {

            if (t->data < data)
            {

                if(t->right==NULL)
                {
                    // if current nodeis null then insert the node.
                    t->right= temp;
                    break; 
                }
            }
        }
    }
    return root;
    
}

void Search(node *root, int data)
{

    int depth = 0;
    node * temp= new node;
    temp = root;

    // Run the loop untill temp points to a null pointer.

    while (temp != NULL)
    {
        depth++;
        if(temp->data == data)
        {

            cout<<"\n Data found at depth: "<<depth;
            return;

        }
        // shift pointer to left child 

        else if (temp->data > data)
            
            temp= temp->left;
        // shift pointer to right child.

        else  
                temp= temp->right;  

    }

    cout<<"\n Data not found";
    return;
    
}
int main()
{
    char ch;

    int n, i, a[20]={97,63,98,1,9,87,66,19,77,22,33,90,49,91,27};
    
    node *root = new node;

    root = NULL;

    // COnstuct the BST
    for(i=0; i<20; i++)
           root= InsertIntoTree(root,a[i]);

      up:
      cout<<"\n Enter the Element to be search: ";
      cin>>n;

      Search(root,n);

      // Ask user to enter choice for futhur searching .

      cout<<"\n\n do you want to search more.......enter choice(y/n)?";
      cin>>ch;

    if(ch=='y' || ch == 'Y')
    goto up;  

    return 0;
}
