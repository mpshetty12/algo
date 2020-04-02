#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	char data;
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
	Link()
	{
		head=NULL;
	}
	void push(int p)
	{
		Node *new_node = new Node();
		new_node->data=p;
		if(head==NULL)
		{
			//cout<<"head created"<<endl;
			new_node->next=NULL;
			head=new_node;
		}
		else
		{
		//	cout<<"other link"<<endl;
			Node *temp=head;
		   new_node->next=temp;
		   head=new_node;
		}
	}
	char pop()
	{
		char t;
		if(head==NULL)
		{
			t='N';
			return t;
		}
		else
		{
			if((head->next)==NULL)
			{
				Node *temp=head;
				head=NULL;
				return (temp->data);
			}
			else
			{
				Node *temp=head;
				head=head->next;
				return (temp->data);
			}
		}
	}
};
int check(string expr)
{
	Link ln;
	int len=expr.length();
	int i=0;
	while(i!=len)
	{
	  if(expr[i]=='{'||expr[i]=='['||expr[i]=='(')
	  {
	     ln.push(expr[i]);  	
	  }	
	  else
	  {
	    if(expr[i]=='}')
	     {
	     	char t=ln.pop();
	     	if(t!='{')
	     	  return 0;
		 }
		 if(expr[i]==')')
	     {
	     	char t=ln.pop();
	     	if(t!='(')
	     	  return 0;
		 }
		 if(expr[i]==']')
	     {
	     	char t=ln.pop();
	     	if(t!='[')
	     	  return 0;
		 }
	  }
	  i++;
	}
	
	char t = ln.pop();
	if(t=='N' && i==len)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
    string expr;
    cout<<"Write any expression it tell it is balnced paranthesis and expressions are correct are not\n";
	cin>>expr;
	int p=check(expr);
	if(p==1)
	{
		cout<<"balanced\n";
	}	
	else
	{
		cout<<"Not balanced\n";
	}
	return 0;
}
