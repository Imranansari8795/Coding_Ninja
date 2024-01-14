#include<iostream>

using namespace std;


class node {

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
        }else{
            tail -> next = node1;
            tail = node1;
        }
        cin>>data;
    }
    return head;
}

node * deleteFromLastAtGivenPos(node * head)
{
    // node * temp = head;
    node * one = head;
    node * two = head;
    int pos;
    cin>>pos;
    if(two != NULL){
    while(pos--)
    {
        two = two -> next;
    }
    
    if(two == NULL)         // delete at head element
    {
        return one -> next;
    }
    while(two -> next != NULL)
    {
        one = one -> next;
        two = two -> next;
    }
        one -> next = one -> next -> next;
    }
        return head;
}
void print(node * head)
{
    node * temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
 node * head = takeInput();
 print(head);
 node * store = deleteFromLastAtGivenPos(head);
 print(store);
}