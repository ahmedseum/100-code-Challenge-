#include<iostream>
using namespace std;
struct node{
    int value;
    struct node* left;
    struct node* right;
    node(int val)
    {
        value=val;
        left=NULL;
        right=NULL;
    }
};

void insertaion(node* &root,int num)
{
    node* newNode=new node(num);
    if(root==NULL)
    {
        root=newNode;
        cout<<"inserted in the root"<<endl;
    }else
    {
        if(newNode->value>= root->value)
        {
            if(root->right!=NULL)
            {
                insertaion(root->right,num);
            }else
            {
                root->right=newNode;
                cout<<"inserted right"<<endl;
            }
        }
        else if(newNode->value < root->value)
        {
            if(root->left!=NULL)
            {
                insertaion(root->left,num);
            }
            else{
            root->left=newNode;
            cout<<"inserted left"<<endl;
            }
        }
    }
}

void leftRotation(node* &root)
{
    if(root->right!=NULL)
    {
        node* RightNode;
        RightNode=root->right;
        root->right=RightNode->left;
        RightNode->left=root;
        cout<<"done"<<endl;
    }
}
void rightRotation(node* &root)
{
    if(root->left!=NULL)
    {
        node* LeftNode;
        LeftNode=root->left;
        root->left=LeftNode->right;
        LeftNode->right=root;
        cout<<"done"<<endl;
    }
}

int main()
{
    node* root=NULL;
    insertaion(root,8);
    insertaion(root,2);
    insertaion(root,14);
    insertaion(root,11);
    insertaion(root,24);
    //rightRotation(root);
    leftRotation(root);
}
