#include<iostream>

using namespace std;

class node{
    public:
   int data;
   node *next;
   node(int data)
   {
    this -> data = data;
    next = NULL;
   }
   
};


// void insertAttail(node *head,int val)
// {
//     node * temp = head;
//     node * n = new node(val);
    
   
// }

void insertAtfirst(node * & head,int val)
{
    node * temp = head;
    node * node1 = new node(val);
    node1 -> next = temp;
    head = node1; 
}
void print(node *head)
{    
    node * temp = head;
    while(temp != NULL)
    {
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
   node * n1 = new node(12);
//    node * n2 = new node(22);
//    node * n3 = new node(23);
     node * head = n1;
      print(head);
     insertAtfirst(head,66);
     insertAtfirst(head,64);
     insertAtfirst(head,664);
     insertAtfirst(head,466);
     print(head);
}