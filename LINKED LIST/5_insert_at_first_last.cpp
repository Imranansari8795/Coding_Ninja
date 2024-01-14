#include<iostream>

using namespace std;


class node
{
    public:
    int data;
    node*next;

    node(int data)
    {
        this ->data = data;
        next = NULL;
    }
};

node * takeInput()      // take input function
{
    int data;
    cin>>data;
    node * head = NULL;
    node * tail = NULL;
    while(data != -1)
    { 
        node * n1 = new node(data);
        if(head == NULL)
        {
            head = n1;
            tail = n1;
        }
        else
        {
             tail -> next = n1;
             tail = n1;
        }
        cin>>data;
    }

   return head;
}
void insertAtTail(node * head)     // insert at tail position function
{
    node * temp  = head;
    int data;
    cin>>data;
   
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    node * n1 = new node(data);
    temp -> next = n1;
}

void insertAtHead(node * &head)                // insert at head position function
{
    int data;
    cin>>data;
    node * temp = head;
    node * n1 = new node(data);
    n1 -> next = head;
    head = n1;
}
void print( node * head)                    // print function
{
    node * temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{

  node * head = takeInput();
  print(head);
  insertAtTail(head);
  print(head);
  insertAtHead(head);
  print(head);

}