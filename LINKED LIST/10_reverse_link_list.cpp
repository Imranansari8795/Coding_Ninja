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
node * reverse(node * head)
{
    if(head == NULL)
    {
        return head;
    }
    node * prev = NULL;
    node * curr = head;
    // while(curr != NULL)
    // {
    //     node * n = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = n;
    // }
    if(curr != NULL)
    {
        node * n = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = n;
    }
    reverse(head -> next);
   return prev;
}
void print(node * rev)
{
    while(rev != NULL)
    {
        cout<< rev -> data<<" ";
        rev = rev -> next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node * head = takeInput();
    print(head);
    node * rev = reverse(head);
    // print(rev);
}
