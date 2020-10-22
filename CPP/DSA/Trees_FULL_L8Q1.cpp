#include<iostream>
using namespace std;

struct node
{
	int data;
	node*lchild;
	node*rchild;
};

struct node*root=NULL;

void insert(int element)
{
	struct node*tempnode=new node();
	struct node*current=new node();
	struct node*parent=new node();
	
	tempnode->data=element;
	tempnode->lchild=NULL;
	tempnode->rchild=NULL;
	
	if(root==NULL)
	{
		root=tempnode;
	}
	else
	{
		current=root;
		parent=NULL;
		
		while(1)
		{
			parent=current;
			
			if(element<current->data)//left side
			{
				current=current->lchild;
				if(current->data==NULL)
				{
					parent->lchild=tempnode;
					return;
				}
			}
			
			else if(element>current->data)//right side
			{	
				current=current->rchild;
				if(current->data==NULL)
				{
					parent->rchild=tempnode;
					return;
				}
				
			}
		}
	}
}

void inorder(struct node*temp)
{
	if(temp!=NULL)
	{	
		inorder(temp->lchild);
		cout<<temp->data;
		inorder(temp->rchild);
	}
}

int main()
{
	int n,i,a[50],choice;
	cout<<"Enter the initial number of elements to be inserted:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		insert(a[i]);
	}
	cout<<"Initial elements inserted successfully."<<endl;
	cout<<"Please Choose the desired operation number from the menu"<<endl;
	cout<<"1-Insert an element"<<endl;
	cout<<"2-Delete an element"<<endl;
	cout<<"3-Find height of a node"<<endl;
	cout<<"4-Find depth of a node"<<endl;
	cout<<"5-Find ancestors of a node"<<endl;
	cout<<"6-Find descendants of a node"<<endl;
	cout<<"7-Find predecessor"<<endl;
	cout<<"8-Find successor"<<endl;
	cout<<"9-Print in inorder"<<endl;
	cout<<"10-Print in preorder"<<endl;
	cout<<"11-Print in postorder"<<endl;
	cout<<"Your choice is: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
			int ele;
			cout<<"Enter element:";
			cin>>ele;
			insert(ele);
			break;
			}
			
		case 9:
			struct node*tempnode=new node();
			tempnode=root;
			inorder(tempnode);
		
	}
	return 0;
}
