#include<iostream>
using namespace std;
class   Node{
 public:
  int data;
  Node *next;
  Node(){
     data=0;
     next=NULL; 
  }
  Node(int d)
  {
      data=d;
  }
};
class Circular{
    public:
     Node *head;
     Circular(){
         head=NULL;
     }
     void appendnode(Node *new_node)
     {
         if(head==NULL)
         {
             head=new_node;
             new_node->next=head;
         }
         else
         {
            Node *ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=head;
         }
     }
     int checklist(int count)
     {
         Node *ptr=head;
         int i=1;
         while(i<count)
         {
             ptr=ptr->next;
            i++;
         }
         //cout<<ptr->data;
         head=NULL;
         return ptr->data;
     }

};
int main()
{
    int n,p,f,t,h=0;
    cin>>t;
   
    Circular cr;
    //int *arr = new int[n];
    
    int *arr=new int[t];
    for(int m=0;m<t;m++)
    {
    	
    	cin>>n;
    for(int i=0;i<n;i++)
    {
    	Node *n1=new Node();
        n1->data=i+1;
        cr.appendnode(n1);
    }
    cin>>p;
    cin>>f;
    int y=cr.checklist(p+f-1);
    
    arr[h++]=y;
    }
    for(int i=0;i<h;i++)
    {
    	cout<<arr[i]<<endl;
	}
    return 0;
}
