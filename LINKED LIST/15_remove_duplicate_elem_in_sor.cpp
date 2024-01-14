#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node * head;
    LinkedList()
    {
        head = NULL;
    }

    void InsertAtEnd(int data)
    {
        Node * new_Node = new Node(data);
        if(head == NULL)
        {
            head = new_Node;
            return ;
        }
        Node * temp = head;
        while(temp->next != NULL)
        {
            temp = temp ->next;
        }
        temp ->next = new_Node;
    }
    void display_sorted()
    {
        Node * temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }

};

void remove_duplicate(Node * &head)
{
    if(head == NULL)
    {
        return;
    }
    
    Node *curr = head;

    while(curr ->next != NULL)   // more than 1 node then
    {
        Node * temp = curr;
        if(curr->data == curr->next->data)
        {
            temp = curr ->next;
            curr->next = curr->next->next;
            free(temp);
        }else{
            curr = curr->next;
        }
    }
}
int main()
{

LinkedList ll;
ll.InsertAtEnd(1);
// ll.display_sorted();
ll.InsertAtEnd(2);
// ll.display_sorted();
ll.InsertAtEnd(3);
// ll.display_sorted();
// ll.InsertAtEnd(3);
// ll.display_sorted();
// ll.InsertAtEnd(3);
// ll.display_sorted();
// ll.InsertAtEnd(4);
// ll.display_sorted();
remove_duplicate(ll.head);
ll.display_sorted();
}