#include<iostream>

using namespace std;


class node{
    public:
  int data;

  node * next;

  node(int data)
  {
    this -> data = data;
    next = NULL;
  }
};

void insertAtlast(node * &tail, int val)
{
    node * node1 = new node(val);
    tail -> next = node1;
    tail = node1;
}

void print(node * head)
{    
    if(head -> next == NULL)
    {
        cout<<head -> data<<endl;
    }
    else{
           while( head != NULL)
   {
      cout << head -> data<<" ";
      head = head -> next;
   }
   cout << endl;
}
}
int main()
{
    node * n1 = new node(12);
    node * head = n1;
    node * tail = n1;
    print(head);
    insertAtlast(n1,23);
    print(tail);
    insertAtlast(n1,54);
    print(tail);
    insertAtlast(n1,567);
    print(tail);
}