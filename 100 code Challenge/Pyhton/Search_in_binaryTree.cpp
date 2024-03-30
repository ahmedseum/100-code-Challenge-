#include<iostream>
using namespace std;

struct node
{
    int value;
    struct node* left;
    struct  node* right;
  node (int val)
  {
   value=val;
   left=NULL;
   right=NULL;
  }
};

void Inserting(node* &root, int val)
{
    node* newNode=new node(val);
    if(root==NULL)
    {
        root=newNode;
        cout<<"inserted on the root "<<val<<endl;
    }
    else
    {
        if(newNode->value>=root->value)
        {
            if(root->right==NULL)
            {
                root->right=newNode;
                cout<<"inserted on right "<<val<<" root is "<<root->value<<endl;
            }else
            {
               Inserting(root->right,val) ;
            }
        }else if (newNode->value<root->value)
        {
             if(root->left==NULL)
                {
                    root->left=newNode;
                    cout<<"inserted on left "<<val<<" root is "<<root->value<<endl;
                }else
                {
                   Inserting(root->left,val);
                }   
        }
    }
}
void Searching(node* &root , int val)
{
    node* tempNode=root;
    int rootValue;
    if(tempNode->value==val)
    {
        cout<<"found and the root node is "<<tempNode->value;
    }else if(val>=tempNode->value)
    {
        if(val==tempNode->right->value)
        {
            cout<<"found and the root node is "<<tempNode->value;
        }else
        {
            Searching(tempNode->right,val);
        }
    }
    else if(val<tempNode->value)
    {
        if(val==tempNode->left->value)
        {
            cout<<"found and the root node is "<<tempNode->value;
        }else
        {
            Searching(tempNode->left,val);
        }
    }
    else
    {
        cout<<"not Found";
    }
}

int main()
{
    node* root=NULL;
    Inserting(root, 23);
    Inserting(root, 14);
    Inserting(root, 31);
    Inserting(root, 7);
    Inserting(root, 17);
    Inserting(root, 9);
    Searching(root , 23);
}
