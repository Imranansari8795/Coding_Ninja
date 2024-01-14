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

node * takeInput()
{
    int data;
    cin>>data;
    node * head = NULL;
    node * tail = NULL;

    while(data != -1)
    {
        node * node1 = new node(data);
        if(head == NULL)
        {
            head = node1;
            tail = node1;
        }
        else
        {
            tail -> next = node1;
            tail = node1;
        }
        cin>>data;
    }
    return head;
}
node * insertAtGivenPos(node * &head, int pos,int data)
{ 

     node * temp = head;
    if(head == NULL);
    {
        return head;
    }
    if(pos < 0)
    {
        return head;
    }
    if(pos == 0)
    {
        node * n1 = new node(data);
        n1 -> next = head;
        head = n1;
    }

    int count = 0;
   while(count < pos - 1 && temp -> next != NULL)
   {
        temp = temp -> next;
        count++;
   }
   if(temp != NULL)
   {
       node * n1 = new node(data);
       node * a = temp -> next;
       temp -> next = n1;
       n1 -> next = a;
   }
    return head;
}
void print(node * head)
{
    node * temp = head;
    while(temp != NULL)
    {
            cout<<temp -> data <<" -> ";
            temp = temp ->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    
    node * head = takeInput();
    print(head);
    int pos;
    cin>>pos;
    insertAtGivenPos(head,pos,34);
    print(head);
}