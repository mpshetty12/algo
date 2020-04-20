#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int t)
		{
			data=t;
		}
};
class Link{
	public:
	    Node *head;
	    Node *top;
	    Link()
	    {
	    	head=NULL;
	    	top=NULL;
		}
		void insert(int n)
		{
			Node *new_node=new Node();
			new_node->data=n;
			Node *temp=head;
			if(temp==NULL)
			{		
			  new_node->next=NULL;	
			   head=new_node;
			}
			else
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				new_node->next=NULL;
				temp->next=new_node;
			}
			
		}
	  void insert1(int n)
		{
			Node *new_node=new Node();
			new_node->data=n;
			Node *temp=top;
			if(temp==NULL)
			{
			  new_node->next=NULL;
			  top=new_node;	
			}
			else
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				new_node->next=NULL;
				temp->next=new_node;
			}
			
		} 
		int count()
		{
			int c=0;
			Node *temp=head;
			while(temp!=NULL)
			{
				temp=temp->next;
				c++;
			}
			return c;
		}
		void rotation(int r)
		{
		  int p=0;
          int s=(r%(count()));
		  while(p!=s)
		  {
		  	insert1(head->data);
		  	head=head->next;
		  	p++;
		  }
		  Node *temp=head;
		  Node *temp1=top;
		  while(temp->next!=NULL)
		  {
		     temp=temp->next;	
		  }
		  while(temp1!=NULL)
		  {
		     insert(temp1->data);
			 temp1=temp1->next;	
		  } 
		}
		void display()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		
};
int main()
{
	Link ln;
	char ch;
	int n,r;
	ch='y';
	while(ch!='n')
	{
	   cout<<"Enter number\n";
	   cin>>n;
	   ln.insert(n);
	   cout<<"Do you want to continue?(enter n --->it will quit othervice move)\n";
	   cin>>ch;
	}
    cout<<"Enter total number of rotation\n";
    cin>>r;
    ln.rotation(r);
    ln.display();
	return 0;
}
